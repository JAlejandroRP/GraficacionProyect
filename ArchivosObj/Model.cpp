#include "Model.h"

Model::Model()
{
    Model::mat_trans = { {1.0f, 0.0f, 0.0f, 0.0f},
                         {0.0f, 1.0f, 0.0f, 0.0f},
                         {0.0f, 0.0f, 1.0f, 0.0f},
                         {0.0f, 0.0f, 0.0f, 1.0f}};
}

void Model::Set_Mat_T(arma::dmat mat)
{
    Model::mat_trans = mat;
}

Model::Model(std::vector<Object> objects)
{
    Model::objects = objects;
    Model::mat_trans = { {1.0f, 0.0f, 0.0f, 0.0f},
                         {0.0f, 1.0f, 0.0f, 0.0f},
                         {0.0f, 0.0f, 1.0f, 0.0f},
                         {0.0f, 0.0f, 0.0f, 1.0f}};
}

void Model::PrintModel()
{
    for(int i = 0; i < (int) Model::objects.size(); i++)
    {
        cout << "name: " << Model::objects[i].name << endl;
        Model::objects[i].ShowVertex();
        Model::objects[i].ShowFaces();
    }
}

void Model::DrawTriangles(int R, int G, int B)
{
    glColor3f(R/255.0f, G/255.0f, B/255.0f);
    int index, desp = 0;
    arma::dvec vert;
    for(int k = 0; k < (int) Model::objects.size(); k++)                        //number of objects
    {
        if(k > 0)
        {
            desp += Model::objects[k - 1].vertices.size() ; //64
        }
        for(int i = 0; i < (int) Model::objects[k].faces.size(); i++)           //number of faces
            for(int j = 0; j < (int) Model::objects[k].faces[i].size(); j++)    //index of vertex
            {
                index =  Model::objects[k].faces[i][j] - 1 - desp;
                vert = Model::mat_trans * Model::objects[k].vertices[index]; 
                glVertex3f(vert[0], vert[1], vert[2]);
            }
    }
}

Model::~Model()
{
}

