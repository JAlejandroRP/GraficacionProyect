#ifndef OBJ_H
#define OBJ_H
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "armadillo"

using namespace std;

/*  This class stores everything that a Object needs
 *  Faces, Vertices, Name, max and min coords.
 */
class Object
{
public:
    Object(vector<arma::dvec> vertices, vector<vector<int>> faces);
    Object(string name);
    ~Object();
    void AddVertex(vector<double> v);
    void AddFace(vector<int> f);
    void Print(char *op);
    void ShowVertex();
    void ShowFaces();
    void SetName(string name);
    void Cal_AABB();
    Object getObject() { return *this; }
/*variables*/
    string name;
    vector<arma::dvec> vertices;
    vector<vector<int>> faces;
    double AABB[3][3];
};

#endif // OBJ_H
