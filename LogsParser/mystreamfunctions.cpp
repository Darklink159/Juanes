#include "mystreamfunctions.h"

MyStreamFunctions::MyStreamFunctions()
{
    countSeekg = 0;
    countSeekp = 0;

}

MyStreamFunctions::MyStreamFunctions(string str)
{
    countSeekg = 0;
    countSeekp = 0;
    str_filePath = str;


    ifstream file(str_filePath.c_str(), ios::in);
    if(file.is_open())
    {

        int fSize = fileSize(str_filePath);
        char a_buf[fSize];
        file.read(a_buf, fSize);
        a_buf[fSize] = '\0';
        str_buf = a_buf;
        file.close();
    }


}

MyStreamFunctions::~MyStreamFunctions()
{

}

void MyStreamFunctions::setDirFile(string str)
{
    str_filePath = str;
    ifstream file(str_filePath.c_str(), ios::in);
    if(file.is_open())
    {

        int fSize = fileSize(str_filePath);
        char a_buf[fSize];
        file.read(a_buf, fSize);
        a_buf[fSize] = '\0';
        str_buf = a_buf;
        file.close();
    }
}

string MyStreamFunctions::getDirFile()
{
    return str_filePath;
}

bool MyStreamFunctions::seekgAfterStr(string str)
{

    //file.seekg(0, fstream::beg);
    //file.seekp(0, fstream::beg);
    string str_temp = str_buf.substr(countSeekg, str_buf.length()-countSeekg);
    int cmp = str_temp.find(str);
    qDebug()<<"cmp: "<<cmp;
    if(cmp < 0)
    {
        return false;
    }
    countSeekg += cmp + str.length();
    //qDebug()<<"true"<<endl;
    return true;

    //ifstream file(str_filePath.c_str());
    /*
    streambuf *pbuf = file.rdbuf();
    //file.seekg(countSeekg);

    qDebug()<<"no entro"<<endl;

    while(pbuf->sgetc()!= EOF)
    {
        qDebug()<<"entro"<<endl;
        long countFor = 0;
        for(long i = 0; i < str.length(); i++)
        {
            char ch;
            ch = pbuf->sbumpc();
            count++;
            if(ch == EOF)
                return false;

            if(str[i] == ch)
            {
                qDebug()<<(QChar)ch<<endl;

                countFor++;

            }else{
                break;
            }
        }


        //file.seekp(count);
        if(countFor == str.length())
        {
            // WARNING: CREATE OTHER FUNCION FOR SEEKG
            //qDebug()<<"count: "<<count<<endl;
            //countSeekp += countFor;
            countSeekg += count;
            return true;
        }
        //ch = pbuf->sbumpc();
        //count++;
    }
    */
    /*
    char c = file.peek();
    while(c != EOF)
    {
        qDebug()<<"entro"<<endl;
        long countFor = 0;
        for(long i = 0; i < str.length(); i++)
        {
            //char ch;
            //ch = pbuf->sbumpc();
            count++;
            if(str[i] == c)
            {
                qDebug()<<(QChar)c<<endl;
                countFor++;

            }else{
                c = file.peek();
                if(c == EOF)
                    return false;
                break;
            }
        }


        //file.seekp(count);
        if(countFor == str.length())
        {
            // WARNING: CREATE OTHER FUNCION FOR SEEKG
            //qDebug()<<"count: "<<count<<endl;
            //countSeekp += countFor;
            countSeekg += count;
            return true;
        }
    }
    */

}

void MyStreamFunctions::seekgAfterOfBlankSpaces()
{
    int end = str_buf.length();
    for(unsigned int i = countSeekg; i < end; i++)
    {
        if(str_buf[i] == ' ')
        {
            qDebug()<<"spaces: "<<"o"<<endl;
            countSeekg++;
        }else{
            break;
        }
    }
}

bool MyStreamFunctions::write(string str)
{
    /*
    ifstream ifs(str_filePath.c_str());

    if(!ifs.is_open())
        return false;

    char *p_charBefore = new char[100000];
    //int size = fileSize(file);
    char *p_charLast = new char[100000];



    string strBuf, strBefore, strAfter;

    //file.seekg(0, ios_base::beg);
    ifs.read(p_charBefore, countSeekg);

    strBefore = p_charBefore;

    //ifs.seekg(0, ios_base::beg);
    //ifs.seekg(countSeekg);

    //qDebug()<<p_charBefore<<"fin"<<endl;
    //qDebug()<<countSeekg<<endl;



    ifs.read(p_charLast, (fileSize(str_filePath)-countSeekg));

    strAfter = p_charLast;



    //ifs.seekg(0, ios_base::beg);
    ifs.close();

    strBuf = strBefore+str+strAfter;
    countSeekg += str.length();
    qDebug()<<QString::fromStdString(strBuf)<<endl;
    qDebug()<<QString::fromStdString(strAfter)<<endl;
    */

    string cpy = str_buf;
    cpy.insert(countSeekg, str);
    str_buf = cpy;
    countSeekg += str.length();


    fstream ofs(str_filePath.c_str(), fstream::out);


    //ofs.seekp(0, fstream::beg);


    //ofs.seekp(0);
    //cpy.push_back('\0');
    ofs.write(cpy.c_str(), cpy.length());
    //ofs<<cpy<<endl;

    //ofs.flush();

    ofs.close();

}

long MyStreamFunctions::fileSize(string file)
{
    ifstream ifs(file.c_str());
    streambuf *pbuf = ifs.rdbuf();

    int count = 0;
    while(pbuf->sgetc()!= EOF)
    {
        pbuf->sbumpc();
        count++;

    }

    ifs.close();
    return count;
}

string MyStreamFunctions::readTok()
{
    unsigned int  i = countSeekg;
    for(; i < str_buf.length(); i++)
    {
        if(str_buf[i] == ' ' || str_buf[i] == '\n' || str_buf[i] == '\t')
            break;
    }


    string str = str_buf.substr(countSeekg, i-countSeekg);
    qDebug()<<"countSeekg: "<<countSeekg<<endl;
    qDebug()<<"i: "<<i<<endl;
    qDebug()<<"str.length: "<<str.length()<<endl;
    qDebug()<<"readTok: "<<"\""<<str.c_str()<<"\""<<endl;
    qDebug()<<"readTok: "<<QString(str.c_str())<<endl;
    str = QString(str.c_str()).toStdString();
    countSeekg += i-countSeekg;
    return str;
}

void MyStreamFunctions::setSeekg(int value)
{
    countSeekg = value;
}

int MyStreamFunctions::getSeekg()
{
    return countSeekg;
}

void MyStreamFunctions::remove(int pos, int n)
{
    str_buf.erase(pos, n);
    qDebug()<<QString(str_buf.c_str())<<endl;
    fstream file(str_filePath.c_str(), fstream::out);

    file<<str_buf;
    file.close();
    countSeekg = pos;
}
