#include "system_log.h"

using namespace module_log;



system_log::system_log()
{
    mdp_file_name_log = DEFAULT_LOG_NAME;
    mdp_file_name_log_error = DEFAULT_LOG_NAME_ERROR;
/*
    md_log_file.open(mdp_file_name_log.c_str(),ios::app);
    md_log_file_error.open(mdp_file_name_log_error.c_str(),ios::app);
    */
}

system_log::system_log(_STR_LOG file_name_log)
{
    _STR_LOG file_name_log_error = file_name_log+'x';

    mdp_file_name_log = file_name_log + DEFAULT_LOG_FILE_EXTENSION;
    mdp_file_name_log_error = file_name_log_error + DEFAULT_LOG_FILE_EXTENSION;
/*
    md_log_file.open(mdp_file_name_log.c_str(),ios::app);
    md_log_file_error.open(mdp_file_name_log_error.c_str(),ios::app);
    */

}

system_log::system_log(_STR_LOG file_name_log, _STR_LOG file_name_log_error)
{
    mdp_file_name_log = file_name_log + DEFAULT_LOG_FILE_EXTENSION;
    mdp_file_name_log_error = file_name_log_error + DEFAULT_LOG_FILE_EXTENSION;
/*
    md_log_file.open(mdp_file_name_log.c_str(),ios::app);
    md_log_file_error.open(mdp_file_name_log_error.c_str(),ios::app);
    */
}


system_log::~system_log()
{

}

void system_log::mf_set_file_name_log(_STR_LOG file_name_log)
{
    mdp_file_name_log = file_name_log + DEFAULT_LOG_FILE_EXTENSION;
/*
    md_log_file.open(mdp_file_name_log.c_str(),ios::app);
    */

}

void system_log::mf_set_file_name_log_error(_STR_LOG file_name_log_error)
{
    mdp_file_name_log_error = file_name_log_error + DEFAULT_LOG_FILE_EXTENSION;
/*
    md_log_file_error.open(mdp_file_name_log_error.c_str(),ios::app);
    */
}

_STR_LOG system_log::mf_get_file_name_log(){return mdp_file_name_log;}
_STR_LOG system_log::mf_get_file_name_log_error(){return mdp_file_name_log_error;}

void system_log::mf_set_name_app(_STR_LOG name_app){md_name_app = name_app;}
void system_log::mf_set_name_file(_STR_LOG name_file){md_name_file = name_file;}
void system_log::mf_set_name_class(_STR_LOG name_class){md_name_class = name_class;}
void system_log::mf_set_name_function(_STR_LOG name_function){md_name_function = name_function;}
void system_log::mf_set_state(_STR_LOG state){md_state = state;}
void system_log::mf_set_comment(_STR_LOG comment){md_comment = comment;}

_STR_LOG system_log::mf_get_name_app(){return md_name_app;}
_STR_LOG system_log::mf_get_name_file(){return md_name_file;}
_STR_LOG system_log::mf_get_name_class(){return md_name_class;}
_STR_LOG system_log::mf_get_name_function(){return md_name_function;}
_STR_LOG system_log::mf_get_state(){return md_state;}
_STR_LOG system_log::mf_get_comment(){return md_comment;}

void system_log::write()
{
    md_log_file.open(mdp_file_name_log.c_str(),ios::app);
    md_log_file_error.open(mdp_file_name_log_error.c_str(),ios::app);

    time_t     now = time(0);
    struct tm  tstruct;
    char       current_time[80];
    tstruct = *localtime(&now);

    strftime(current_time, sizeof(current_time), "%Y %m %d %X", &tstruct);

    md_log_file<<current_time<<SPC;
    md_log_file<<md_name_app<<SPC<<md_name_file<<SPC<<md_name_class<<SPC<<md_name_function<<SPC<<md_state<<SPC<<md_comment<<endl;

    if(md_state == "ERROR")
    {
        md_log_file<<current_time<<SPC;
        md_log_file<<md_name_app<<SPC<<md_name_file<<SPC<<md_name_class<<SPC<<md_name_function<<SPC<<md_state<<SPC<<md_comment<<endl;
    }

    md_log_file.close();
    md_log_file_error.close();

    md_state = "";
    md_comment = "";

}

void system_log::write(_STR_LOG comment)
{
    md_log_file.open(mdp_file_name_log.c_str(),ios::app);
    md_log_file_error.open(mdp_file_name_log_error.c_str(),ios::app);

    time_t     now = time(0);
    struct tm  tstruct;
    char       current_time[80];
    tstruct = *localtime(&now);

    strftime(current_time, sizeof(current_time), "%Y %m %d %X", &tstruct);

    md_log_file<<current_time<<SPC;
    md_log_file<<md_name_app<<SPC<<md_name_file<<SPC<<md_name_class<<SPC<<md_name_function<<SPC<<md_state<<SPC<<comment<<endl;

    if(md_state == "ERROR")
    {
        md_log_file<<current_time<<SPC;
        md_log_file<<md_name_app<<SPC<<md_name_file<<SPC<<md_name_class<<SPC<<md_name_function<<SPC<<md_state<<SPC<<comment<<endl;
    }

    md_log_file.close();
    md_log_file_error.close();

    md_state = "";
    md_comment = "";
}

