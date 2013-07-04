#ifndef MANAGERPROFILE_H
#define MANAGERPROFILE_H

#include <QString>
#include <QDebug>

#include <vector>
#include <fstream>

#include "mystreamfunctions.h"

typedef QString _QSTR;
using namespace std;

#define APP "app"
#define CLASS "class"
#define FILE "file"
#define FUNCTION "function"
#define STATE "state"
#define COMMENT "comment"
#define WRITE "w!"
//comment x = SYS_COMMENT(x);
//w! x = SYS_WRITE_COMMENT(x);
//w! = SYS_WRITE;
class ManagerProFile
{
public:
    ManagerProFile();
    ManagerProFile(QString);
    ~ManagerProFile();

    void processProFile();
    void setProFile(QString);

    QString getProFile();
private:
    QString str_proFile;
    QString str_directory;
    vector<string> vector_nameFiles;

    void extractProSources();
    void aplicarCambiosEnArchivos();
};

#endif // MANAGERPROFILE_H
