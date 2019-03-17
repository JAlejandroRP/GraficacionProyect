#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H
#include "armadillo"
#include "Model.h"
#include "cmath"

class Transformation
{
    public:
        Transformation();
    /*  these methods will modify directly all the vertices inside of the 
     *  model usefull when we want to fix some parameter in our model */
        void Translate(Model &model, float x, float y, float z);
        void Scale(Model &model, float x, float y, float z);
        void RotateX(Model &model, float angle);
        void RotateY(Model &model, float angle);
        void RotateZ(Model &model, float angle);
    /* ********************************************************************** */
    /* these methods return us matrices of transformation   */
        arma::dmat R_X(float angle);   //rotation in x axis
        arma::dmat R_Y(float angle);   //rotation in y axis
        arma::dmat R_Z(float angle);   //rotation in z axis
        arma::dmat T(float x, float y, float z);    //translation in xyz
        arma::dmat S(float x, float y, float z);    //scalation if 0, 0, 0 model will disappear
        ~Transformation();
};

#endif // TRANSFORMATION_H
