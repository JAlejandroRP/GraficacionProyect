#include "Object.h"
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <string.h>
#include "Reader.h"

using namespace std;

Object::Object(string name)
{
    Object::SetName(name);
}

Object::Object(vector<arma::dvec> vertices, vector<vector<int>> faces)
{
    Object::SetName((char *)"obj_test");
    Object::vertices = vertices;
    Object::faces = faces;
}

Object::~Object()
{
    
}

void Object::Cal_AABB()
{
    double xm = 0, ym = 0, zm = 0;//maximos
    double xmin = 0, ymin = 0, zmin = 0;//minimos
    for(int i = 0; i < (int) vertices.size(); i++)
    {
        if((vertices[i][0]) >= xm)
            xm = vertices[i][0];
        if((vertices[i][1]) >= ym)
            ym = vertices[i][1];
        if((vertices[i][2]) >= zm)
            zm = vertices[i][2];
            
        if(vertices[i][0] <= xmin)
            xmin = vertices[i][0];
        if(vertices[i][1] <= ymin)
            ymin = vertices[i][1];
        if(vertices[i][2] <= zmin)
            zmin = vertices[i][2];
    }
    Object::AABB[0][0] = xm;
    Object::AABB[0][1] = ym;
    Object::AABB[0][2] = zm;
    Object::AABB[1][0] = xmin;
    Object::AABB[1][1] = ymin;
    Object::AABB[1][2] = zmin;
    cout << "AABB" << endl;
    cout << "max:" << endl;
    cout << "x: " << xm << " y: " << ym << " z: " << zm << endl;
    cout << "min:" << endl;
    cout << "x: " << xmin << " y: " << ymin << " z: " << zmin << endl;
}

void Object::SetName(string name)
{
    if(name[1] == ' ')
        Object::name = &name[2];
    else
        Object::name = name; 
}

void Object::AddVertex(vector<double> v)
{
    arma::dvec dv = {v[0], v[1], v[2], 1.0};
    Object::vertices.push_back(dv);
}

void Object::AddFace(vector<int> f)
{
    Object::faces.push_back(f);
}

void Object::ShowVertex()
{
    cout << "v" << endl;        
    for(int i = 0; i < (int) vertices.size(); i++)
        cout << vertices[i][0] << " " << vertices[i][1] << " " << vertices[i][2] << endl;
}

void Object::ShowFaces()
{
    cout << "f" << endl;        
    for(int i = 0; i < (int) faces.size(); i++, cout << endl)
        for(int j = 0; j < (int) faces[i].size(); j++)
            cout << faces[i][j] << " ";        
}
