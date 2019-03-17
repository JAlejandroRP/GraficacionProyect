#ifndef READER_H
#define READER_H
#include <fstream>
#include "Object.h"

using namespace std;

class Reader
{
public:
    Reader();
    ~Reader();
    vector<Object> ReadFile(std::string file_name);
    void ReadVertex(ifstream &read, vector<Object> &objects);
    void ReadFaces(ifstream &read, vector<Object> &objects);
    vector<double> newVertex(char line[]);
    vector<int> newFace(char line[]);
    std::string SlashSplit(char line[]);
};

#endif // READER_H
