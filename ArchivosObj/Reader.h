#ifndef READER_H
#define READER_H
#include <fstream>
#include <list>
#include "Object.h"

using namespace std;

class Reader
{
public:
    Reader(char *file);
    ~Reader();
    
    void ReadFile();
    void ShowObjects();
    list<Object> objects;
    char *file;

};

#endif // READER_H
