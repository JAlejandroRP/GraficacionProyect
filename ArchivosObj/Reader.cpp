#include "Reader.h"
#include "Object.h"
#include "fstream"
using namespace std;

Reader::Reader(char *file)
{
    Reader::file = file;
}

Reader::~Reader()
{
}

void Reader::ReadFile()
{
    ifstream read;
    char line[500];
    int exit = 0;
    read.open(Reader::file, ios::out | ios::in);
    if(read.is_open()) 
    {
        do
        {
            Object obj;
            obj.ReadVertex(read);
            exit = obj.ReadFaces(read);
            objects.push_back(obj);
            if(exit == 2)//si hay otro objeto, rebobina una linea
                read.seekg(read.tellg() - 100);
            else if(exit == 0)//end of file
                break;
        }while(true);
    }
    read.close();
}

void Reader::ShowObjects()
{
    list<Object>::iterator itr = objects.begin();
    while(itr != objects.end())
    {
        itr->ShowVertex();
        itr->ShowFaces();
        itr++;
    }
}