#ifndef MODEL_H
#define MODEL_H
#include "Object.h"
#include <GLFW/glfw3.h>
#include "armadillo"

class Model
{
public:
    Model();
    Model(std::vector<Object> objects);
    void PrintModel();
    void DrawTriangles(int R, int G, int B);
    void Set_Mat_T(arma::dmat mat);
    ~Model();
    
    std::vector<Object> objects;
    arma::dmat mat_trans;
};

#endif // MODEL_H
