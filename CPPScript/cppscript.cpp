#include "cppscript.h"

CPPScript::CPPScript()
{
}

void CPPScript::mf_setHost(_QSTR host){ md_o_sql_host = host; }

void CPPScript::mf_setUser(_QSTR user){ md_o_sql_user = user; }

void CPPScript::mf_setPass(_QSTR pass){ md_o_sql_pass = pass; }

void CPPScript::mf_setDB(_QSTR db){ md_o_sql_db = db; }

void CPPScript::setDirFolder(string str){ strDirFolder = str + "\\"; }

_QSTR CPPScript::mf_getHost(){ return md_o_sql_host; }

_QSTR CPPScript::mf_getUser(){ return md_o_sql_user; }

_QSTR CPPScript::mf_getPass(){ return md_o_sql_pass; }

_QSTR CPPScript::mf_getDB(){ return md_o_sql_db; }

string CPPScript::getDirFolder(){ return strDirFolder; }
/*
void CPPScript::generateClass_withinDB(_QSTR class_name)
{
    // Abrir File
    mkdir(getDirFolder().c_str());

    QSqlDatabase db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName(md_o_sql_host);
    db.setDatabaseName(md_o_sql_db);
    db.setUserName(md_o_sql_user);
    db.setPassword(md_o_sql_pass);
    bool ok = db.open();

    //md_o_name_class = name_table;
    if(ok)
    {
        qDebug()<<"Connection sucessfull"<<endl;

        mf_extractColumnsTable(class_name);
        if(mf_openFile_h(class_name))
        {
            mf_fillFile_h(class_name);
        }
        if(mf_openFile_cpp(class_name))
        {
            mf_fillFile_cpp(class_name);
        }
    }
    else
    {

    }
}
*/
/*
void CPPScript::mf_extractColumnsTable(_QSTR class_name)
{

    QSqlQuery columnsTable;
    //_QSTR query = "SELECT column_name, data_type, column_key FROM ";
    //query += "INFORMATION_SCHEMA.COLUMNS WHERE table_name = '"+name_table+"'";
    _QSTR query = "SHOW COLUMNS FROM "+class_name;
    columnsTable.prepare(query);

    if(columnsTable.exec())
    {
        qDebug()<<"query successful"<<endl;
        while(columnsTable.next())
        {
            qDebug()<<columnsTable.value(0).toString()<<endl;
            qDebug()<<columnsTable.value(1).toString()<<endl;
            md_o_v_column_names.push_back(columnsTable.value(0).toString());
            md_o_v_data_types.push_back(columnsTable.value(1).toString());
        }
    }


}
*/
void CPPScript::generateClass_withinDB()
{
    // Create folder
    //mkdir(getDirFolder().c_str());

    QSqlDatabase db =  QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(md_o_sql_host);
    db.setDatabaseName(md_o_sql_db);
    db.setUserName(md_o_sql_user);
    db.setPassword(md_o_sql_pass);
    bool ok = db.open();

    //md_o_name_class = name_table;
    if(ok)
    {
        qDebug()<<"Connection sucessfull"<<endl;

        mf_extractColumnsOfData(data);

        for(unsigned int i = 0; i < data.size(); i++)
        {
            if(mf_openFile_h(data[i].first))
            {
                md_o_v_column_names = data[i].second;
                mf_fillFile_h(data[i].first);
            }
        }

        for(unsigned int i = 0; i < data.size(); i++)
        {
            if(mf_openFile_cpp(data[i].first))
            {
                md_o_v_column_names = data[i].second;
                mf_fillFile_cpp(data[i].first);
            }
        }

        for(unsigned int i = 0; i < data.size(); i++)
        {
            if(mf_openFile_objectFunciones_h(data[i].first))
            {
                md_o_v_column_names = data[i].second;
                mf_fillFile_objectFunciones_h(data[i].first);
            }
        }

        for(unsigned int i = 0; i < data.size(); i++)
        {
            if(mf_openFile_objectFunciones_cpp(data[i].first))
            {
                md_o_v_column_names = data[i].second;
                mf_fillFile_objectFunciones_cpp(data[i].first);
            }
        }


        mf_generate_class_objectGeneral_h(data);

    }
    else
    {

    }
}
void CPPScript::mf_extractColumnsOfData(vector<pair<_QSTR, vector<_QSTR> > > &data)
{
    /*
    QSqlQuery sql_tables;
    sql_tables.prepare("SHOW tables");
    if(sql_tables.exec())
    {
        while(sql_tables.next())
        {

            v_info.push_back((*(new TablesAndColumns(sql_tables.value(0).toString() )) ) );
        }
    }
    */
    for(unsigned i = 0; i < data.size(); i++)
    {
        QSqlQuery columnsTable;
        //_QSTR query = "SELECT column_name, data_type, column_key FROM ";
        //query += "INFORMATION_SCHEMA.COLUMNS WHERE table_name = '"+name_table+"'";
        _QSTR query = "SHOW COLUMNS FROM "+data[i].first;
        columnsTable.prepare(query);

        if(columnsTable.exec())
        {
            qDebug()<<"query successful"<<endl;
            while(columnsTable.next())
            {
                data[i].second.push_back(columnsTable.value(0).toString());
            }
        }
    }
}
/*
void CPPScript::generateClass_withoutDB(_QSTR class_name, vector<_QSTR>& l_v_dTypes)
{

}
*/
void CPPScript::push_back_tableName(_QSTR str)
{
    data.push_back(make_pair(str,*new vector<_QSTR>));
}

bool CPPScript::mf_openFile_h(_QSTR& class_name)
{
    ofstream file;
    string str_name_class = getDirFolder()+STR_OBJECT+class_name.toStdString()+".h";
    file.open(str_name_class.c_str());

    if(file.is_open())
    {
        qDebug()<<"File_h openned"<<endl;
        return true;
    }

    qDebug()<<"File_h not openned"<<endl;
    return false;
}
bool CPPScript::mf_openFile_cpp(_QSTR& class_name)
{
    ofstream file;
    string str_name_class = getDirFolder()+STR_OBJECT+class_name.toStdString()+".cpp";
    file.open(str_name_class.c_str());

    if(file.is_open())
    {
        qDebug()<<"File_cpp openned"<<endl;
        return true;
    }

    qDebug()<<"File_cpp not openned"<<endl;
    return false;
}

bool CPPScript::mf_openFile_objectFunciones_h(_QSTR &class_name)
{
    ofstream file;
    string str_name_class = getDirFolder()+STR_OBJECT+class_name.toStdString()+STR_FUNCIONES+".h";
    file.open(str_name_class.c_str());

    if(file.is_open())
    {
        qDebug()<<"File_cpp openned"<<endl;
        return true;
    }

    qDebug()<<"File_cpp not openned"<<endl;
    return false;
}

bool CPPScript::mf_openFile_objectFunciones_cpp(_QSTR &class_name)
{
    ofstream file;
    string str_name_class = getDirFolder()+STR_OBJECT+class_name.toStdString()+STR_FUNCIONES+".cpp";
    file.open(str_name_class.c_str());

    if(file.is_open())
    {
        qDebug()<<"File_cpp openned"<<endl;
        return true;
    }

    qDebug()<<"File_cpp not openned"<<endl;
    return false;
}
void CPPScript::mf_fillFile_h(_QSTR& class_name)
{
    qDebug()<<"mf_fillFile_h class_name: "<<class_name<<endl;
    string file_class_name = getDirFolder()+STR_OBJECT+class_name.toStdString()+".h";
    fstream file(file_class_name.c_str());

    string str_class_name_upper = class_name.toUpper().toStdString();
    string str_class_name = class_name.toStdString();

    file<<"#ifndef OBJECT_"<<str_class_name_upper<<"_H"<<endl;
    file<<"#define OBJECT_"<<str_class_name_upper<<"_H"<<endl;
    file<<endl;
    file<<"#include \"share_include.h\""<<endl;
    file<<endl;
    file<<"#define TABLE_NAME_"<<class_name.toUpper().toStdString()<<" \""<<class_name.toStdString()<<"\""<<endl;
    file<<"class object_"<<str_class_name<<":public object_general"<<endl;
    file<<"{"<<endl;
    file<<endl;

    file<<"private:"<<endl;

    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\t_QSTR md_o_"<<temp<<";"<<endl;
    }
    file<<endl;
    file<<"public:"<<endl;
    file<<"\tobject_"<<str_class_name<<"();"<<endl;

    string temp_1 = md_o_v_column_names[0].toStdString();
    file<<"\tobject_"<<str_class_name<<"(_QSTR "<<temp_1;
    for(unsigned int i = 1; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<", _QSTR "<<temp;
    }
    file<<");"<<endl;

    if(md_o_v_column_names.size() > 1)
    {
        string temp_2 = md_o_v_column_names[1].toStdString();
        file<<"\tobject_"<<str_class_name<<"(_QSTR "<<temp_2;
        for(unsigned int i = 2; i < md_o_v_column_names.size(); i++)
        {
            string temp = md_o_v_column_names[i].toStdString();
            file<<", _QSTR "<<temp;
        }
        file<<");"<<endl;
        file<<endl;
    }
    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\tvoid mf_set_"<<temp<<"(_QSTR "<<temp<<");"<<endl;
    }

    file<<endl;
    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\t_QSTR mf_get_"<<temp<<"();"<<endl;
    }
    file<<endl;


    file<<"\tbool mf_load(_QSTR pk);"<<endl;
    file<<"\tbool mf_add();"<<endl;
    file<<"\tbool mf_update();"<<endl;
    file<<"\tbool mf_remove();"<<endl;
    //file<<"\tQSqlQueryModel* mf_get();"<<endl;
    file<<endl;
    file<<"\t~object_"<<str_class_name<<"();"<<endl;
    file<<"};";
    file<<endl;
    file<<"#endif // OBJECT_"+str_class_name_upper+"_H";

    file<<endl;
    file<<"\t/*"<<endl;

    file<<"\tobject_"<<str_class_name<<" obj_"<<str_class_name<<";"<<endl;
    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\t"<<"obj_"<<str_class_name<<"."<<"mf_set_"<<temp<<"();"<<endl;
    }

    file<<endl;
    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\t"<<"obj_"<<str_class_name<<"."<<"mf_get_"<<temp<<"();"<<endl;
    }
    file<<"\t*/"<<endl;

}

void CPPScript::mf_fillFile_cpp(_QSTR& class_name)
{
    qDebug()<<"mf_fillFile_cpp class_name: "<<class_name<<endl;
    string file_class_name = getDirFolder()+STR_OBJECT+class_name.toStdString()+".cpp";
    fstream file(file_class_name.c_str());

    //string str_class_name_upper = class_name.toUpper().toStdString();
    string str_class_name = class_name.toStdString();

    file<<"#include \""<<STR_OBJECT+class_name.toStdString()<<".h\""<<endl;
    file<<endl;
    file<<"object_"<<str_class_name<<"::"<<"object_"<<str_class_name<<"()"<<endl;
    file<<"{"<<endl;
    file<<"\t//file "<<class_name.toStdString()<<endl;
    file<<"\t//function construct_0"<<endl;
    file<<"\t//w!"<<endl;
    file<<"}"<<endl;
    file<<endl;

    string temp_1 = md_o_v_column_names[0].toStdString();
    file<<"object_"<<str_class_name<<"::object_"<<str_class_name<<"(_QSTR "<<temp_1;
    for(unsigned int i = 1; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<", _QSTR "<<temp;
    }
    file<<")"<<endl;
    file<<"{"<<endl;    
    file<<"\t//file "<<class_name.toStdString()<<endl;
    file<<"\t//function construct_1"<<endl;
    file<<"\t//w!"<<endl;
    file<<endl;

    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\tmd_o_"<<temp<<" = "<<temp<<";"<<endl;
    }
    file<<"}"<<endl;

    if(md_o_v_column_names.size() > 1)
    {
        string temp_2 = md_o_v_column_names[1].toStdString();
        file<<"object_"<<str_class_name<<"::object_"<<str_class_name<<"(_QSTR "<<temp_2;
        for(unsigned int i = 2; i < md_o_v_column_names.size(); i++)
        {
            string temp = md_o_v_column_names[i].toStdString();
            file<<", _QSTR "<<temp;
        }
        file<<")"<<endl;
        file<<"{"<<endl;
        file<<"\t//file "<<class_name.toStdString()<<endl;
        file<<"\t//function construct_2"<<endl;
        file<<"\t//w!"<<endl;
        file<<endl;

        for(unsigned int i = 1; i < md_o_v_column_names.size(); i++)
        {
            string temp = md_o_v_column_names[i].toStdString();
            file<<"\tmd_o_"<<temp<<" = "<<temp<<";"<<endl;
        }
        file<<"}"<<endl;
    }

    file<<"object_"<<str_class_name<<"::"<<"~"<<"object_"<<str_class_name<<"()"<<endl;
    file<<"{"<<endl;
    file<<endl;
    file<<"}"<<endl;
    file<<endl;

    file<<endl;
    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"void object_"<<str_class_name<<"::mf_set_"<<temp<<"(_QSTR "<<temp<<")"<<endl;
        file<<"{"<<endl;
        file<<"\t//function mf_set_"<<temp<<endl;
        file<<"\t//w!"<<endl;
        file<<endl;
        file<<"\tmd_o_"<<temp<<" = "<<temp<<";"<<endl;
        file<<"}"<<endl;
    }
    file<<endl;

    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"_QSTR object_"<<str_class_name<<"::mf_get_"<<temp<<"()"<<endl;
        file<<"{"<<endl;
        file<<"\t//function mf_get_"<<temp<<endl;
        file<<"\t//w!"<<endl;
        file<<endl;
        file<<"\treturn md_o_"<<temp<<";"<<endl;
        file<<"}"<<endl;
    }
    file<<endl;

    // FUNCION LOAD
    file<<"bool object_"<<str_class_name<<"::mf_load(_QSTR pk)"<<endl;
    file<<"{"<<endl;
    file<<"\t//function mf_load"<<endl;
    file<<"\t//w!"<<endl;
    file<<endl;
    file<<"\tQSqlQuery query;"<<endl;
    file<<endl;
    file<<"\tquery.prepare(\"SELECT * FROM "<<str_class_name<<" WHERE "<<md_o_v_column_names[0].toStdString()<<" = ?\");"<<endl;
    file<<"\tquery.bindValue(0,pk);"<<endl;
    file<<"\tquery.exec();"<<endl;
    file<<endl;
    file<<"\tif(query.next())"<<endl;
    file<<"\t{"<<endl;

    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\t\tmd_o_"<<temp<<" = "<<"query.value("<<i<<").toString();"<<endl;

    }
    file<<endl;
    file<<"\t\t//state OK"<<endl;
    file<<"\t\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn true;"<<endl;
    file<<"\t}else{"<<endl;
    file<<"\t\t//state FAILED"<<endl;
    file<<"\t\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn false;"<<endl;
    file<<"\t}"<<endl;
    file<<"}"<<endl;

    // FUNCION ADD
    file<<"bool object_"<<str_class_name<<"::mf_add()"<<endl;
    file<<"{"<<endl;
    file<<"\t//function mf_add"<<endl;
    file<<"\t//w!"<<endl;
    file<<endl;
    file<<"\tQSqlQuery query;"<<endl;
    file<<endl;    
    file<<"\tstring str_query = \"INSERT INTO "<<str_class_name<<"(\";"<<endl;
    file<<"\tif ("<<"md_o_"<<md_o_v_column_names[0].toStdString()<<" != \"\")"<<endl;
    file<<"\t\tstr_query += \""<<md_o_v_column_names[0].toStdString()<<", \";"<<endl;
    //file<<"\telse"<<endl;
    //file<<"\t\tstr_query += NULL";
    file<<"\tstr_query += \""<<md_o_v_column_names[1].toStdString()<<"\";"<<endl;
    for(unsigned int i = 2; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\tstr_query += \", "<<temp<<"\";"<<endl;
    }


    file<<"\tstr_query += \""<<") VALUES(\";"<<endl;
    file<<"\tif ("<<"md_o_"<<md_o_v_column_names[0].toStdString()<<"!= \"\")"<<endl;
    file<<"\t{"<<endl;
    file<<"\t\tstr_query += \""<<"?, \";"<<endl;
    file<<"\t}"<<endl;
    file<<"\tstr_query += \""<<"?\";"<<endl;
    for(unsigned int i = 2; i < md_o_v_column_names.size(); i++)
    {
        file<<"\tstr_query += \", "<<"?\";"<<endl;
    }


    file<<"\tstr_query += \")\";"<<endl;
    file<<endl;
    file<<"\tquery.prepare(QString(str_query.c_str()));"<<endl;

    file<<"\tint integer = 0;"<<endl;
    file<<"\tif ("<<"md_o_"<<md_o_v_column_names[0].toStdString()<<" != \"\")"<<endl;
    file<<"\t{"<<endl;
    file<<"\t\tquery.bindValue(integer++, "<<"md_o_"<<md_o_v_column_names[0].toStdString()<<");"<<endl;
    //file<<"\t\tinteger++;"<<endl;
    file<<"\t}"<<endl;
    //file<<"\telse"<<endl;
    //file<<"\t\tquery.bindValue(integer++, \"NULL\");"<<endl;

    for(unsigned int i = 1; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\tquery.bindValue("<<"integer++"<<", "<<"md_o_"<<temp<<");"<<endl;
    }

    file<<endl;
    file<<"\tif(query.exec())"<<endl;
    file<<"\t{"<<endl;


    file<<"\t\t//state OK"<<endl;
    file<<"\t\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn true;"<<endl;
    file<<endl;
    file<<"\t}else{"<<endl;
    file<<"\t\t//state FAILED"<<endl;
    file<<"\t\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn false;"<<endl;
    file<<"\t}"<<endl;
    file<<"}"<<endl;
    file<<endl;

    // FUNCION UPDATE
    file<<"bool object_"<<str_class_name<<"::mf_update()"<<endl;
    file<<"{"<<endl;
    file<<"\t//function mf_update"<<endl;
    file<<"\t//w!"<<endl;
    file<<endl;
    file<<"\tQSqlQuery query;"<<endl;
    file<<endl;

    file<<"\tquery.prepare(\"UPDATE "<<str_class_name<<" SET "<<md_o_v_column_names[1].toStdString()<<" = ?";
    for(unsigned int i = 2; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<", "<<temp<<" = ?";
    }

    file<<" WHERE "<<md_o_v_column_names[0].toStdString()<<" = ?\");"<<endl;

    for(unsigned int i = 1; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\tquery.bindValue("<<(i-1)<<", "<<"md_o_"<<temp<<");"<<endl;
    }
    string temp = md_o_v_column_names[0].toStdString();
    file<<"\tquery.bindValue("<<md_o_v_column_names.size()-1<<", "<<"md_o_"<<temp<<");"<<endl;
    file<<endl;
    file<<"\tif(query.exec())"<<endl;
    file<<"\t{"<<endl;


    file<<"\t\t//state OK"<<endl;
    file<<"\t\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn true;"<<endl;
    file<<endl;
    file<<"\t}else{"<<endl;
    file<<"\t\t//state FAILED"<<endl;
    file<<"\t\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn false;"<<endl;
    file<<"\t}"<<endl;
    file<<"}"<<endl;
    file<<endl;

    // FUNCION REMOVE
    file<<"bool object_"<<str_class_name<<"::mf_remove()"<<endl;
    file<<"{"<<endl;
    file<<"\t//function mf_remove"<<endl;
    file<<"\t//w!"<<endl;
    file<<endl;
    file<<"\tQSqlQuery query;"<<endl;
    file<<endl;

    file<<"\tquery.prepare(\"DELETE "<<str_class_name<<" FROM "<<md_o_v_column_names[0].toStdString()<<" = ?\");"<<endl;
    file<<"\tquery.bindValue(0"<<", "<<"md_o_"<<md_o_v_column_names[0].toStdString()<<");"<<endl;


    file<<endl;
    file<<"\tif(query.exec())"<<endl;
    file<<"\t{"<<endl;


    file<<"\t\t//state OK"<<endl;
    file<<"\t\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn true;"<<endl;
    file<<endl;
    file<<"\t}else{"<<endl;
    file<<"\t//state FAILED"<<endl;
    file<<"\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn false;"<<endl;
    file<<"\t}"<<endl;
    file<<"}"<<endl;
    file<<endl;
}

void CPPScript::mf_fillFile_objectFunciones_h(_QSTR& class_name)
{
    string file_class_name = getDirFolder()+STR_OBJECT+class_name.toStdString()+STR_FUNCIONES+".h";
    fstream file(file_class_name.c_str());

    string str_class_name_upper = class_name.toUpper().toStdString();
    string str_class_name = class_name.toStdString();

    file<<"#ifndef OBJECT_"<<str_class_name_upper<<"_FUNCIONES"<<"_H"<<endl;
    file<<"#define OBJECT_"<<str_class_name_upper<<"_FUNCIONES"<<"_H"<<endl;
    file<<endl;
    file<<"#include \"share_include.h\""<<endl;
    file<<endl;
    file<<"class object_"<<str_class_name<<STR_FUNCIONES<<endl;
    file<<"{"<<endl;
    file<<endl;
    file<<"private:"<<endl;
    file<<endl;

    file<<"public:"<<endl;
    file<<"\tobject_"<<str_class_name<<STR_FUNCIONES<<"();"<<endl;

    file<<endl;
    file<<"\t~object_"<<str_class_name<<STR_FUNCIONES<<"();"<<endl;

    file<<"\t/*"<<endl;
    file<<"\tQSqlQueryModel* mf_model_"<<str_class_name<<"();"<<endl;
    file<<"\t*/"<<endl;
    file<<"};";
    file<<endl;
    file<<"#endif // OBJECT_"+str_class_name_upper+"_H";
}

void CPPScript::mf_fillFile_objectFunciones_cpp(_QSTR& class_name)
{
    qDebug()<<"mf_fillFile_cpp class_name: "<<class_name<<endl;
    string file_class_name = getDirFolder()+STR_OBJECT+class_name.toStdString()+STR_FUNCIONES+".cpp";
    fstream file(file_class_name.c_str());

    //string str_class_name_upper = class_name.toUpper().toStdString();
    string str_class_name = class_name.toStdString();

    file<<"#include \""<<STR_OBJECT+class_name.toStdString()<<STR_FUNCIONES<<".h\""<<endl;
    file<<endl;
    file<<"object_"<<str_class_name<<STR_FUNCIONES<<"::"<<"object_"<<str_class_name<<STR_FUNCIONES<<"()"<<endl;
    file<<"{"<<endl;
    file<<"\t//file "<<class_name.toStdString()<<endl;
    file<<"\t//function construct_0"<<endl;
    file<<"\t//w!"<<endl;
    file<<"}"<<endl;
    file<<endl;
    file<<"object_"<<str_class_name<<STR_FUNCIONES<<"::~"<<"object_"<<str_class_name<<STR_FUNCIONES<<"()"<<endl;
    file<<"{"<<endl;
    file<<"\t//file "<<class_name.toStdString()<<endl;
    file<<"\t//function destruct_0"<<endl;
    file<<"\t//w!"<<endl;
    file<<"}"<<endl;
    file<<endl;

    // Funcion model
    file<<"/*"<<endl;
    file<<"QSqlQueryModel* "<<"object_"<<str_class_name<<STR_FUNCIONES<<"::"<<"mf_model_"<<str_class_name<<"()"<<endl;
    file<<"{"<<endl;
    file<<"\tQSqlQueryModel* model = new QSqlQueryModel;"<<endl;
    file<<"\tQString str_query = \"SELECT \";"<<endl;

    file<<endl;
    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\tstr_query += \""<<temp<<"\";"<<endl;
    }
    file<<endl;
    file<<"\tstr_query += \" FROM "<<str_class_name<<"\";"<<endl;
    file<<"\tstr_query += \" WHERE\";"<<endl;
    file<<"\tmodel->setQuery(str_query);"<<endl;
    file<<"\treturn model;"<<endl;

    file<<"}"<<endl;
    file<<"*/"<<endl;



}

// Class Object General
void CPPScript::mf_generate_class_objectGeneral_h(vector<pair<_QSTR, vector<_QSTR > > >& data)
{
    string str_general = "general";
    QString temp = str_general.c_str();
    if(!mf_openFile_h(temp))
        return;

    qDebug()<<"mf_fillFile_h class_name: "<<_QSTR::fromStdString(str_general)<<endl;
    string file_class_name = getDirFolder()+STR_OBJECT+str_general+".h";
    fstream file(file_class_name.c_str());

    string str_general_upper = QString(str_general.c_str()).toUpper().toStdString();

    file<<"#ifndef OBJECT_"<<str_general_upper<<"_H"<<endl;
    file<<"#define OBJECT_"<<str_general_upper<<"_H"<<endl;
    file<<"\n#include \"share_include.h\""<<endl;
    file<<"\nclass object_"<<str_general<<endl;
    file<<"{"<<endl;
    file<<"public:"<<endl;
    file<<"\tobject_"<<str_general<<"(){ }"<<endl;
    file<<"private:"<<endl;
    file<<"\tvirtual bool mf_load(_QSTR pk) = 0;"<<endl;
    file<<"\tvirtual bool mf_update() = 0;"<<endl;
    file<<"\tvirtual bool mf_add() = 0;"<<endl;
    file<<"\tvirtual bool mf_remove() = 0;"<<endl;
    file<<"\n\t//virtual bool mf_load(_QSTR pk) = 0;"<<endl;
    file<<"\t//virtual bool mf_load(_QSTR pk) = 0;"<<endl;
    file<<"};"<<endl;
    file<<"\n#endif // OBJECT_"<<str_general_upper<<endl;

    file<<"/*"<<endl;
    for(unsigned i = 0; i < data.size(); i++)
    {
        file<<"#include \""<<"object_"<<data[i].first.toStdString()<<".h\""<<endl;
    }
    file<<endl;
    for(unsigned i = 0; i < data.size(); i++)
    {
        file<<"#include \""<<"object_"<<data[i].first.toStdString()<<STR_FUNCIONES<<".h\""<<endl;
    }
    file<<"*/"<<endl;
}

void CPPScript::mf_generate_class_objectGeneral_cpp()
{
    /*
    string str_general = "general";
    if(!mf_openFile_cpp(str_general))
        return;

    qDebug()<<"mf_fillFile_h class_name: "<<str_general<<endl;
    string file_class_name = getDirFolder()+str_general+".h";
    fstream file(file_class_name.c_str());

    //string str_class_name_upper = class_name.toUpper().toStdString();

    file<<"#ifndef OBJECT_"<<str_class_name_upper<<"_H"<<endl;
    */
}
