#include "Transformation.h"

Transformation::Transformation()
{
}

arma::dmat Transformation::T(float x, float y, float z)
{
    return{ {1.0f, 0.0f, 0.0f, x},
            {0.0f, 1.0f, 0.0f, y},
            {0.0f, 0.0f, 1.0f, z},
            {0.0f, 0.0f, 0.0f, 1.0f} };
}

arma::dmat Transformation::S(float x, float y, float z)
{
    return { {x, 0.0f, 0.0f, 0.0f},
             {0.0f, y, 0.0f, 0.0f},
             {0.0f, 0.0f, z, 0.0f},
             {0.0f, 0.0f, 0.0f, 1.0f} };
}

arma::dmat Transformation::R_X(float angle)
{
     return { {1.0f, 0.0f, 0.0f, 0.0f},
              {0.0f, cos(angle * M_PI / 180.0), - sin(angle * M_PI / 180.0), 0.0f},
              {0.0f, sin(angle * M_PI / 180.0), cos(angle * M_PI / 180.0), 0.0f},
              {0.0f, 0.0f, 0.0f, 1.0f} };
}

arma::dmat Transformation::R_Y(float angle)
{
     return { {cos(angle * M_PI / 180.0), 0.0f, sin(angle * M_PI / 180.0), 0.0f},
              {0.0f, 1.0f, 0.0f, 0.0f},
              {-sin(angle * M_PI / 180.0), 0.0f, cos(angle * M_PI / 180.0), 0.0f},
              {0.0f, 0.0f, 0.0f, 1.0f} };
}

arma::dmat Transformation::R_Z(float angle)
{
     return { {cos(angle * M_PI / 180.0), -sin(angle * M_PI / 180.0), 0.0f, 0.0f},
              {sin(angle * M_PI / 180.0), cos(angle * M_PI / 180.0), 0.0f, 0.0f},
              {0.0f, 0.0f, 1.0f, 0.0f},
              {0.0f, 0.0f, 0.0f, 1.0f} };
}

void Transformation::Translate(Model &model, float x, float y, float z)
{
    arma::dmat T = { {1.0f, 0.0f, 0.0f, x},
                     {0.0f, 1.0f, 0.0f, y},
                     {0.0f, 0.0f, 1.0f, z},
                     {0.0f, 0.0f, 0.0f, 1.0f} };
    for(int i = 0; i < (int) model.objects.size(); i++)
        for(int j = 0; j < (int) model.objects[i].vertices.size(); j++)
            model.objects[i].vertices[j] = T * model.objects[i].vertices[j];
}

void Transformation::Scale(Model &model, float x, float y, float z)
{
    arma::dmat S = { {x, 0.0f, 0.0f, 0.0f},
                     {0.0f, y, 0.0f, 0.0f},
                     {0.0f, 0.0f, z, 0.0f},
                     {0.0f, 0.0f, 0.0f, 1.0f} };
    for(int i = 0; i < (int) model.objects.size(); i++)
        for(int j = 0; j < (int) model.objects[i].vertices.size(); j++)
            model.objects[i].vertices[j] = S * model.objects[i].vertices[j];
}


void Transformation::RotateX(Model &model, float angle)
{
    arma::dmat RX = { {1.0f, 0.0f, 0.0f, 0.0f},
                      {0.0f, cos(angle * M_PI / 180.0), - sin(angle * M_PI / 180.0), 0.0f},
                      {0.0f, sin(angle * M_PI / 180.0), cos(angle * M_PI / 180.0), 0.0f},
                      {0.0f, 0.0f, 0.0f, 1.0f} };
                      
    for(int i = 0; i < (int) model.objects.size(); i++)
        for(int j = 0; j < (int) model.objects[i].vertices.size(); j++)
            model.objects[i].vertices[j] = RX * model.objects[i].vertices[j];
}

void Transformation::RotateY(Model &model, float angle)
{
    arma::dmat RY = { {cos(angle * M_PI / 180.0), 0.0f, sin(angle * M_PI / 180.0), 0.0f},
                      {0.0f, 1.0f, 0.0f, 0.0f},
                      {-sin(angle * M_PI / 180.0), 0.0f, cos(angle * M_PI / 180.0), 0.0f},
                      {0.0f, 0.0f, 0.0f, 1.0f} };
                      
    for(int i = 0; i < (int) model.objects.size(); i++)
        for(int j = 0; j < (int) model.objects[i].vertices.size(); j++)
            model.objects[i].vertices[j] = RY * model.objects[i].vertices[j];
}

void Transformation::RotateZ(Model &model, float angle)
{
    arma::dmat RZ = { {cos(angle * M_PI / 180.0), -sin(angle * M_PI / 180.0), 0.0f, 0.0f},
                      {sin(angle * M_PI / 180.0), cos(angle * M_PI / 180.0), 0.0f, 0.0f},
                      {0.0f, 0.0f, 1.0f, 0.0f},
                      {0.0f, 0.0f, 0.0f, 1.0f} };
                      
    for(int i = 0; i < (int) model.objects.size(); i++)
        for(int j = 0; j < (int) model.objects[i].vertices.size(); j++)
            model.objects[i].vertices[j] = RZ * model.objects[i].vertices[j];
}

Transformation::~Transformation()
{
}

