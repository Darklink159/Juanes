#include "database_connection.h"

using namespace module_dbconnection;

database_connection::database_connection()
{

}

database_connection::~database_connection()
{

}


void database_connection::mf_set_driver(_QSTR_DB driver)
{
    md_driver = driver;
}

void database_connection::mf_set_host(_QSTR_DB host)
{
    md_host = host;
}

void database_connection::mf_set_port(_QSTR_DB port)
{
    md_port = port;
}

void database_connection::mf_set_user(_QSTR_DB user)
{
    md_user = user;
}

void database_connection::mf_set_pass(_QSTR_DB pass)
{
    md_pass = pass;
}

void database_connection::mf_set_name(_QSTR_DB name)
{
    md_name = name;
}

void database_connection::mf_set_options(_QSTR_DB options)
{
    md_options = options;
}

_QSTR_DB database_connection::mf_get_driver()
{
    return md_driver;
}

_QSTR_DB database_connection::mf_get_host()
{
    return md_host;
}

_QSTR_DB database_connection::mf_get_port()
{

    return md_port;
}

_QSTR_DB database_connection::mf_get_user()
{
    return md_user;
}

_QSTR_DB database_connection::mf_get_pass()
{
    return md_pass;
}

_QSTR_DB database_connection::mf_get_name()
{
    return md_name;
}

_QSTR_DB database_connection::mf_get_options()
{
    return md_options;
}

void database_connection::mf_load_configuration(_STR_DB file_config)
{
    _STR_DB name_file_cfg = file_config + DB_FILE_NAME_EXTENSION;

    ifstream db_config_file(name_file_cfg.c_str());

    _STR_DB host,name,user,pass,port;

    db_config_file>>host;
    db_config_file>>name;
    db_config_file>>user;
    db_config_file>>pass;
    db_config_file>>port;

    md_host = (QString::fromStdString(host));
    md_name = (QString::fromStdString(name));
    md_user = (QString::fromStdString(user));
    md_pass = (QString::fromStdString(pass));
    md_port = (QString::fromStdString(port));
}

bool database_connection::mf_connect()
{

    QSqlDatabase my_database = QSqlDatabase::addDatabase("QMYSQL");

    my_database.setHostName(md_host);
    my_database.setDatabaseName(md_name);
    my_database.setUserName(md_user);
    my_database.setPassword(md_pass);

    if(my_database.open())
    {

        qDebug()<<"Conection success...";
        return true;

    }else{
        qDebug()<<"Conection error...";
        return false;
    }

}
