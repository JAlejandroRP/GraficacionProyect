#ifndef OBJ_H
#define OBJ_H
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <list>
#include "Vertex.h"
#include "Face.h"

using namespace std;
class Object
{
public:
    Object();
    ~Object();
    char name[50];
    
    void Print(char *op);
    
    void ReadVertex(ifstream &read);
    void ShowVertex();
    Vertex newVertex(char line[]);
    
    int ReadFaces(ifstream &read);
    void ShowFaces();
    Face newFace(char line[]);
    
    char* SlashSplit(char line[]);
private:
    list<Vertex> vertexs;
    list<Face> faces;
    //Vertex v;
};

#endif // OBJ_H
