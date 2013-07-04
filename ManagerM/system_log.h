#ifndef SYSTEM_LOG_H
#define SYSTEM_LOG_H

#include <fstream>
#include <string>
#include <time.h>
#include <stdio.h>

using namespace std;

namespace module_log{

typedef string _STR_LOG;
typedef const string _CSTR_LOG;
typedef ofstream _OFILE_LOG;


#define DEFAULT_LOG_NAME "myapp.log"
#define DEFAULT_LOG_NAME_ERROR "myappx.log"
#define DEFAULT_LOG_FILE_EXTENSION ".log"
#define SPC " "

class system_log
{
private:

    _OFILE_LOG md_log_file;
    _OFILE_LOG md_log_file_error;

    _STR_LOG mdp_file_name_log;
    _STR_LOG mdp_file_name_log_error;


    system_log(const system_log&);
    system_log& operator = (const system_log&);

    _STR_LOG md_name_app;
    _STR_LOG md_name_file;
    _STR_LOG md_name_class;
    _STR_LOG md_name_function;
    _STR_LOG md_state;
    _STR_LOG md_comment;

public:

    system_log();
    system_log(_STR_LOG file_name_log);
    system_log(_STR_LOG file_name_log, _STR_LOG file_name_log_error);

    void mf_set_file_name_log(_STR_LOG file_name_log);
    void mf_set_file_name_log_error(_STR_LOG file_name_log_error);

    _STR_LOG mf_get_file_name_log();
    _STR_LOG mf_get_file_name_log_error();

    void mf_set_name_app(_STR_LOG name_app);
    void mf_set_name_file(_STR_LOG name_file);
    void mf_set_name_class(_STR_LOG name_class);
    void mf_set_name_function(_STR_LOG name_function);
    void mf_set_state(_STR_LOG state);
    void mf_set_comment(_STR_LOG comment);

    _STR_LOG mf_get_name_app();
    _STR_LOG mf_get_name_file();
    _STR_LOG mf_get_name_class();
    _STR_LOG mf_get_name_function();
    _STR_LOG mf_get_state();
    _STR_LOG mf_get_comment();

    void write();
    void write(_STR_LOG comment);

    ~system_log();

};

}
#endif // SYSTEM_LOG_H
