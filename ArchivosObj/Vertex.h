#ifndef VERTEX_H
#define VERTEX_H
#include <vector>

class Vertex
{
public:
    Vertex(double x, double y, double z);
    ~Vertex();
    //void PrintVector();
//private:
    std::vector<double> v;
    
};

#endif // VERTEX_H
