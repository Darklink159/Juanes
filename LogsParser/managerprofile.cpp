#include "managerprofile.h"

ManagerProFile::ManagerProFile()
{
}

ManagerProFile::ManagerProFile(_QSTR str)
{
    str_proFile = str;
    int count = 0;
    for(unsigned int i = str.length()-1; i >= 0; i--)
    {
        count++;
        if(str[i] == '/')
            break;
    }
    str_directory = str_proFile;
    str_directory.remove(str.length()-count, count);
}

ManagerProFile::~ManagerProFile()
{

}

void ManagerProFile::setProFile(QString str)
{
    str_proFile = str;
    int count = 0;
    for(unsigned int i = str.length()-1; i >= 0; i--)
    {
        count++;
        if(str[i] == '/')
            break;
    }
    str_directory = str_proFile;
    str_directory.remove(str.length()-count, count);
}

QString ManagerProFile::getProFile()
{
    return str_proFile;
}

void ManagerProFile::processProFile()
{
    if(str_proFile == "")
        return;
    string filePath = str_proFile.toStdString();
    ifstream qtProFile(filePath.c_str());

    if(qtProFile.is_open())
    {
        qtProFile.close();

        extractProSources();
        aplicarCambiosEnArchivos();
        qDebug()<<"ManagerProFile en processProFile: qtProFile esta abierto"<<endl;
    } else{
        qDebug()<<"ManagerProFile en processProFile: qtProFile no se pudo abrir"<<endl;
    }
    //vector_nameFiles;
}

void ManagerProFile::extractProSources()
{
    string filePath = str_proFile.toStdString();
    ifstream qtProFile(filePath.c_str());
    if(qtProFile.is_open())
    {
        qDebug()<<"extractProSources: qtProFile esta abierto"<<endl;
        string str;
        while(qtProFile>>str)
        {
            //qDebug()<<_QSTR::fromStdString(str)<<endl;
            if(str == "SOURCES")
                break;
        }

        qtProFile>>str;
        //qDebug()<<_QSTR::fromStdString(str)<<endl;
        if(str == "+=")
        {
            qtProFile>>str;
            str = str.erase(str.length()-1, 1);
            vector_nameFiles.push_back(str);


            while(qtProFile>>str)
            {

                //QString cpy = _QSTR::fromStdString(str);
                vector_nameFiles.push_back(str);

                //qDebug()<<"v_Forms: "<<_QSTR::fromStdString(str)<<endl;

                qtProFile>>str;
                if(str != "\\")
                    break;
            }
            //qDebug()<<"whats"<<endl;
        }
        qtProFile.close();
    } else{
        qDebug()<<"extractProSources: qtProFile no se pudo abrir"<<endl;
    }
}

void ManagerProFile::aplicarCambiosEnArchivos()
{
    for(unsigned int i = 0; i < vector_nameFiles.size(); i++)
    {
        string filePath = str_directory.toStdString()+"/"+vector_nameFiles[i];
        ifstream qtProFile(filePath.c_str());

        if(qtProFile.is_open())
        {
            qtProFile.close();
            qDebug()<<"antes de usar mystreamfunctions"<<endl;
            MyStreamFunctions obj(filePath);

            while(obj.seekgAfterStr("//"))
            {


            int pos = obj.getSeekg()-2;

            obj.seekgAfterOfBlankSpaces();

            string str_tok = obj.readTok();

            QString str_cmp = str_tok.c_str();
            str_cmp = str_cmp.toLower();

            obj.seekgAfterOfBlankSpaces();
            string str = obj.readTok();
            int n = obj.getSeekg()-pos;
            qDebug()<<"pos: "<<pos<<endl;
            qDebug()<<"n: "<<n<<endl;
            if(str_cmp == APP)
            {

                qDebug()<<"str: "<<str.c_str();
                //obj.setSeekg(n);
                obj.remove(pos, n);
                obj.write("\n\tSYS_APP(\""+str+"\");");
                //SYS_APP(X);

            }else{
                if(str_cmp == CLASS)
                {
                    obj.remove(pos, n);
                    obj.write("SYS_CLASS(\""+str+"\");");
                }else{
                    if(str_cmp == FILE)
                    {
                        obj.remove(pos, n);
                        obj.write("SYS_FILE(\""+str+"\");");
                    }else{
                        if(str_cmp == FUNCTION)
                        {
                            obj.remove(pos, n);
                            obj.write("SYS_FUNCTION(\""+str+"\");");
                        }else{
                            if(str_cmp == STATE)
                            {
                                obj.remove(pos, n);
                                obj.write("SYS_STATE(\""+str+"\");");
                            }else{
                                if(str_cmp == COMMENT)
                                {
                                    obj.remove(pos, n);
                                    obj.write("SYS_COMMENT(\""+str+"\");");
                                }else{
                                    if(str_cmp == WRITE)
                                    {
                                        obj.remove(pos, n);
                                        if(str != "")
                                        {
                                            obj.write("SYS_WRITE_COMMENT(\""+str+"\");");
                                        }else{
                                            obj.write("SYS_WRITE;");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            }
            /*

            qDebug()<<"ops 2"<<endl;
            obj.seekgAfterStr("write");
            obj.seekgAfterOfBlankSpaces();

            qDebug()<<"ops 3"<<endl;
            string str = obj.readTok();

            obj.write("LogParse " + str);
            qDebug()<<"ops 4"<<endl;
            */

            //qDebug()<<"ManagerProFile en aplicarCambiosEnArchivos: qtProFile esta abierto"<<endl;
        } else{
            qDebug()<<"ManagerProFile en aplicarCambiosEnArchivos: qtProFile no se pudo abrir"<<endl;
        }
    }

}
