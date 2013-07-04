#ifndef CPPSCRIPT_H
#define CPPSCRIPT_H

// Standart libraries
#include <fstream>
#include <QDebug>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
// Qt libraries
#include <QtSql/QtSql>

// Other libraries

#include <direct.h>

typedef QString _QSTR;


const string STR_OBJECT = "object_";
const string STR_FUNCIONES = "_funciones";

class CPPScript
{
public:
    CPPScript();
    //void generateClass_withinDB(_QSTR class_name);
    void generateClass_withinDB();
    //void generateClass_withoutDB(_QSTR class_name, vector<_QSTR>& l_v_dTypes);

    void push_back_tableName(_QSTR);

    void mf_setHost(_QSTR);
    void mf_setUser(_QSTR);
    void mf_setPass(_QSTR);
    void mf_setDB(_QSTR);

    void setDirFolder(string);

    _QSTR mf_getHost();
    _QSTR mf_getUser();
    _QSTR mf_getPass();
    _QSTR mf_getDB();

    string getDirFolder();
private:
    _QSTR md_o_name_class;
    _QSTR md_o_sql_host;
    _QSTR md_o_sql_user;
    _QSTR md_o_sql_pass;
    _QSTR md_o_sql_db;

    string strDirFolder;

    vector<_QSTR > md_o_v_column_names;
    vector<pair<_QSTR, vector<_QSTR > > > data;

    //void mf_extractColumnsTable(_QSTR class_name);
    void mf_extractColumnsOfData(vector<pair<_QSTR, vector<_QSTR > > >&);

    bool mf_openFile_h(_QSTR& class_name);
    bool mf_openFile_cpp(_QSTR& class_name);
    bool mf_openFile_objectFunciones_h(_QSTR& class_name);
    bool mf_openFile_objectFunciones_cpp(_QSTR& class_name);

    void mf_fillFile_h(_QSTR& class_name);
    void mf_fillFile_cpp(_QSTR& class_name);
    void mf_fillFile_objectFunciones_h(_QSTR& class_name);
    void mf_fillFile_objectFunciones_cpp(_QSTR& class_name);

    void mf_generate_class_objectGeneral_h(vector<pair<_QSTR, vector<_QSTR > > >&);
    void mf_generate_class_objectGeneral_cpp();

};

#endif // CPPSCRIPT_H
