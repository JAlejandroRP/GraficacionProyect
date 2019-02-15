#include "Face.h"
#include <list>

using namespace std;
Face::Face(list<int> vertexs)
{
    Face::f = vertexs;
}

Face::~Face()
{
}

