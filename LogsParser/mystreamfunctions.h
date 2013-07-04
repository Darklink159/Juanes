#ifndef MYSTREAMFUNCTIONS_H
#define MYSTREAMFUNCTIONS_H

#include <QString>
#include <QDebug>

#include <fstream>
#include <string>
using namespace std;

class MyStreamFunctions
{
public:
    MyStreamFunctions();
    MyStreamFunctions(string);
    ~MyStreamFunctions();

    int countSeekg;
    int countSeekp;
    string str_filePath;

    void setDirFile(string);
    string getDirFile();

    bool seekgAfterStr(string);
    void seekgAfterOfBlankSpaces();
    bool write(string);
    void remove(int, int);
    string readTok();

    void setSeekg(int);
    int getSeekg();
private:
    string str_buf;

    long fileSize(string file);
};

#endif // MYSTREAMFUNCTIONS_H
