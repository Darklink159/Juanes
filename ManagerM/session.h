#ifndef SESSION_H
#define SESSION_H

#include <string>

using namespace std;

namespace module_session{

typedef string _STR_SESSION;

class session
{

private:

    _STR_SESSION md_code;
    _STR_SESSION md_name;
    _STR_SESSION md_nick_name;
    _STR_SESSION md_permissions;

public:

    session();
    session(_STR_SESSION code,_STR_SESSION name,_STR_SESSION nick_name,_STR_SESSION permissions);

    void mf_set_code(_STR_SESSION code);
    void mf_set_name(_STR_SESSION name);
    void mf_set_nick_name(_STR_SESSION nick_name);
    void mf_set_permissions(_STR_SESSION permissions);

    _STR_SESSION mf_get_code();
    _STR_SESSION mf_get_name();
    _STR_SESSION mf_get_nick_name();
    _STR_SESSION mf_get_permissions();





    ~session(){}
};


}

#endif // SESSION_H
