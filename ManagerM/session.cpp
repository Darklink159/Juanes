#include "session.h"

using namespace module_session;

session::session()
{

}

session::session(_STR_SESSION code,_STR_SESSION name, _STR_SESSION nick_name, _STR_SESSION permissions)
{
    md_code = code;
    md_name = name;
    md_nick_name = nick_name;
    md_permissions = permissions;
}

void session::mf_set_code(_STR_SESSION code)
{
    md_code = code;
}

void session::mf_set_name(_STR_SESSION name)
{
    md_name = name;
}

void session::mf_set_nick_name(_STR_SESSION nick_name)
{
    md_nick_name = nick_name;
}

void session::mf_set_permissions(_STR_SESSION permissions)
{
    md_permissions = permissions;
}

_STR_SESSION session::mf_get_code()
{
    return md_code;
}

_STR_SESSION session::mf_get_name()
{
    return md_name;
}

_STR_SESSION session::mf_get_nick_name()
{
    return md_nick_name;
}

_STR_SESSION session::mf_get_permissions()
{
    return md_permissions;
}

