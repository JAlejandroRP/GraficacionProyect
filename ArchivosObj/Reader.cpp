#include "Reader.h"
#include "Object.h"
#include "fstream"

using namespace std;

Reader::Reader()
{
}

Reader::~Reader()
{
}



//crea una cara a partir de una string
vector<int> Reader::newFace(char line[])
{
    vector<int> f;
    char read[50];
    std::string index;
    for(int i = 2, j = 0; line[i] != '\0'; i++, j++)
    {
        read[j] = line[i];//separando string en espacios
        if(line[i] == ' ')
        {
            index = Reader::SlashSplit(read);
            if(index[0] != 'n')
                f.push_back(atoi(index.c_str()));
            else
                f.push_back(atoi(read));
            j = -1;
        }
    }
    index = Reader::SlashSplit(read);
    if(index[0] != 'n')
        f.push_back(atoi(index.c_str()));
    else
        f.push_back(atoi(read));
    return f;
}

void Reader::ReadFaces(ifstream &read, vector<Object> &objects)
{
    int index = -1;
    char line[50];
    if(read.is_open())
    {
        do
        {
            read.getline(line, 50);
            if(line[0] == 'o' || line[0] == 'g')
                index++;
            else if(line[0] == 'f')
                objects[index].AddFace(Reader::newFace(line));
        }while(!read.eof());
    }
}

//a partir de una cadena crea un vertice
//retorna un Vertex
vector<double> Reader::newVertex(char line[])
{
    std::vector<double> v;
    double coord;
    char cord[20], *auxline;
    auxline = &line[2];
    
    for(int i = 0, j = 0; *(auxline + i) != '\0'; i++, j++)
    {
        cord[j] = *(auxline + i);
        if(*(auxline + i) == ' ')
        {
            coord = atof(cord);
            v.push_back(coord);
            j = -1;
        }
    }
    coord = atof(cord);
    v.push_back(coord);
    return v;
}


//funcion para leer todos los vertices de un archivo
//ob es el objeto al que le corresponden los vertices
void Reader::ReadVertex(ifstream &read, vector<Object> &objects)
{
    char line[100];
    int index = -1;
    if(read.is_open())
    {
        do
        {
            read.getline(line, 100);
            if(line[0] == 'o' || line[0] == 'g')
                index++;
            else if(line[0] == 'v' && line[1] == ' ') 
                objects[index].AddVertex(Reader::newVertex(line));
        } while(!read.eof());
    }
}

std::string Reader::SlashSplit(char line[])
{
    int i;
    for(i = 0; line[i] != '\0'; i++)//si la cadena no contiene //
        if(line[i] == '/')
            break;
    if(line[i] == '\0')
        return "none";
    char face[50];
    for(i = 0; line[i] != '/'; i++)
        face[i] = line[i];
    face[i] = '\0';    
    return face;
}

vector<Object> Reader::ReadFile(std::string file_name)
{
    vector<Object> objects;
    ifstream read;
    char line[500];
    int num_obj = 0;
    read.open(file_name, ios::out | ios::in);
    if(read.is_open())
        while(read.getline(line, 500))
            if(line[0] == 'o' || line[0] == 'g')
            {
                objects.push_back(Object(line));//creando objetos sin contenido
                num_obj++;
            }
    if(num_obj == 0)
        objects.push_back(Object(file_name));//si no se encontraron 'o' o 'g' agrega solo un objeto
    read.close();//ahora tenemos el numero de objetos contenidos
    read.open(file_name, ios::out | ios::in);//volvemos a abrir el archivo para leer los datos
    Reader::ReadVertex(read, objects);//leyendo vertices y dandoselos a todos los objectos
    read.close();
    read.open(file_name, ios::out | ios::in);//abrimos el archivo para leer las caras
    Reader::ReadFaces(read, objects);
    read.close();
    return objects;
}