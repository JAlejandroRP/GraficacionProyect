#ifndef FACE_H
#define FACE_H
#include <list>

using namespace std;

class Face
{
public:
    Face(list<int> vertexs);
    ~Face();
//private:
    list<int> f;
};

#endif // FACE_H
