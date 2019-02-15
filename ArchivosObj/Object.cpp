#include "Object.h"
#include <fstream>
#include <stdlib.h>
#include <list>
#include <vector>
#include <string.h>

using namespace std;

Object::Object()
{
    
}

Object::~Object()
{
}


void Object::ShowVertex()
{
    list<Vertex>::iterator pos;
    pos = Object::vertexs.begin();
    char *name = &Object::name[2];
    printf("***************** %s *****************\n", name);
    while(pos != Object::vertexs.end())
    {
        printf("v %lf %lf %lf\n", pos->v[0], pos->v[1], pos->v[2]);
        pos++;
    }
}

void Object::ShowFaces()
{
    list<Face>::iterator itr;
    list<int>::iterator itrint;
    
    itr = Object::faces.begin();
    while(itr != Object::faces.end())
    {
        itrint = itr->f.begin();
        printf("f ");
        while(itrint != itr->f.end())
        {
            printf("%d ", (*itrint));
            itrint++;
        }
        printf("\n");
        itr++;
    }
}


Vertex Object::newVertex(char line[])
{
    std::vector<double> v;
    double coord;
    char cord[20], *auxline;
    auxline = &line[2];
    
    for(int i = 0, j = 0; *(auxline + i) != '\0'; i++, j++)
    {
        cord[j] = *(auxline + i);
        if(*(auxline + i) == ' ')
        {
            coord = atof(cord);
            v.push_back(coord);
            j = -1;
        }
    }
    coord = atof(cord);
    v.push_back(coord);
    return Vertex(v[0], v[1], v[2]);
}

Face Object::newFace(char line[])
{
    list<int> face;
    char *index, read[10];
    for(int i = 2, j = 0; line[i] != '\0'; i++, j++)
    {
        read[j] = line[i];
        if(line[i] == ' ')
        {
            index = Object::SlashSplit(read);
            face.push_back(atoi(index));
            j = -1;
        }
    }
    index = Object::SlashSplit(read);
    face.push_back(atoi(index));
    return Face(face);
}

int Object::ReadFaces(ifstream &read)
{
    char line[50];
    if(read.is_open())
    {
        do
        {
            read.getline(line, 50);
            if(read.eof())
                return 0;
            if(line[0] == 'f')
                Object::faces.push_back(newFace(line));
            if(line[0] == 'o')//si se encontr otro objecto
                return 2;   
        }while(true);
    }
    return -1;
}

void Object::ReadVertex(ifstream &read)
{
    char line[50];
    if(read.is_open() || !read.eof())
    {
        do
        {
            if(line[0] == 'o')
                strcpy(Object::name, line);
            read.getline(line, 50);
            if(line[0] == 'v' && line[1] != 'n') 
                Object::vertexs.push_back(Object::newVertex(line));
            else if(line[0] == 'v' && line[1] == 'n')
            {
                return;
            }
        } while(true);
    }
}

char* Object::SlashSplit(char line[])
{
    char *index;
    index = (char*)malloc(10 * sizeof(char));
    for(int i = 0; line[i] != '/'; i++)
        *(index + i) = line[i];
    return index;
}

