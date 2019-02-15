#include "Vertex.h"
#include <vector>

using namespace std;

Vertex::Vertex(double x, double y, double z)
{
    Vertex::v.push_back(x);
    Vertex::v.push_back(y);
    Vertex::v.push_back(z);
}

Vertex::~Vertex()
{
    
}

