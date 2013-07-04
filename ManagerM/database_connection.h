#ifndef DATABASE_CONNECTION_H
#define DATABASE_CONNECTION_H

#include <QString>
#include <QSqlDatabase>
#include <QDebug>
#include <string>
#include <fstream>

using namespace std;

namespace module_dbconnection{

typedef QString _QSTR_DB;
typedef string _STR_DB;

#define DB_FILE_NAME_EXTENSION ".cfg"

class database_connection
{

private:

  _QSTR_DB md_driver;

  _QSTR_DB md_host;
  _QSTR_DB md_port;

  _QSTR_DB md_user;
  _QSTR_DB md_pass;
  _QSTR_DB md_name;
  _QSTR_DB md_options;

public:
  database_connection();

  void mf_set_driver(_QSTR_DB driver);
  void mf_set_host(_QSTR_DB host);
  void mf_set_port(_QSTR_DB port);
  void mf_set_user(_QSTR_DB user);
  void mf_set_pass(_QSTR_DB pass);
  void mf_set_name(_QSTR_DB name);
  void mf_set_options(_QSTR_DB options);

  _QSTR_DB mf_get_driver();
  _QSTR_DB mf_get_host();
  _QSTR_DB mf_get_port();
  _QSTR_DB mf_get_user();
  _QSTR_DB mf_get_pass();
  _QSTR_DB mf_get_name();
  _QSTR_DB mf_get_options();

  void mf_load_configuration(_STR_DB file_config);

  bool mf_connect();

  ~database_connection();
};

}

#endif // DATABASE_CONNECTION_H
