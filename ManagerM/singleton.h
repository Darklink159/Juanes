#ifndef SINGLETON_H
#define SINGLETON_H


#include <QDebug>
template<class T>

class singleton
{


private:

    static T* md_p_instance;
    static void mf_s_destroy_singleton()
    {
         qDebug()<<"Deleting";
        if(md_p_instance != 0 );
            delete md_p_instance;
    }

    singleton();
    singleton(singleton const &);
    singleton &operator=(singleton const &);



public:


    static T* mf_sr_get_instance()
    {
        if(md_p_instance == 0)
        {
            md_p_instance = new T();


        }

        return md_p_instance;
    }




    virtual ~singleton();

};
template<class T>
T* singleton<T>::md_p_instance = 0;

#define SINGLETON(T) singleton< T >::mf_sr_get_instance()

#endif // SINGLETON_H
