#include <stdio.h>
#include <stdlib.h>
#include <GLFW/glfw3.h>
#include "Reader.h"
#include "Transformation.h"
#include "Model.h"
#include "armadillo"

int main( void )
{
    Reader reader;                              //file reader
    Transformation t;                           //class to transform an object
    Model sun(reader.ReadFile("rock.obj"));     //model that contains vertices and faces within objects 
    t.Scale(sun, 0.35, 0.5, 0.35);
    Model mercurio = sun, venus = sun, tierra = sun, marte = sun, luna = sun;
    Model jupiter = sun, saturno(reader.ReadFile("saturn.obj")), urano = sun, neptuno = sun;
    float r_t = 0, r_l = 0;
    t.Scale(luna, 0.02, 0.02, 0.02);
    t.Scale(mercurio, 0.04, 0.04, 0.04);
    t.Translate(mercurio, -0.21, 0.0, 0.0);
    t.Scale(venus, 0.09, 0.09, 0.09);
    t.Translate(venus, -0.235, 0.0, 0.0);
    t.Scale(tierra, 0.1, 0.1, 0.1);
    t.Scale(marte, 0.06, 0.06, 0.06);
    t.Translate(marte, -0.32, 0.0, 0.0);
    
    t.Scale(jupiter, 0.5, 0.5, 0.5);
    t.Translate(jupiter, -0.45, 0.0, 0.0);
    
    t.Scale(saturno, 0.315, 0.45, 0.315);
    t.RotateZ(saturno, 30.0);
    t.Translate(saturno, -0.68, 0.0, 0.0);
    
    t.Scale(urano, 0.15, 0.15, 0.15);
    t.Translate(urano, -0.88, 0.0, 0.0);
    
    t.Scale(neptuno, 0.125, 0.125, 0.125);
    t.Translate(neptuno, -0.95, 0.0, 0.0);
    GLFWwindow* window;
    if( !glfwInit() )
    {
        fprintf( stderr, "Fallo al inicializar GLFW\n" );
        getchar();
        return -1;
    }

    window = glfwCreateWindow(1280, 720, "Ejemplo OpenGL", NULL, NULL);
    if( window == NULL ) {
        fprintf( stderr, "Fallo al abrir la ventana de GLFW.\n" );
        getchar();
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    do {
        glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glBegin(GL_TRIANGLES);
            t.RotateY(sun, 2.0f);
            sun.DrawTriangles(255, 255, 0);
            
            t.RotateY(mercurio, 4.1491);
            mercurio.DrawTriangles(55, 55, 55);
            
            t.RotateY(venus, 1.62552737);
            venus.DrawTriangles(255, 0, 0);
            
            tierra.Set_Mat_T(t.R_Y(((int) r_t++) % 360) * t.T(-0.28, 0.0, 0.0));
            luna.Set_Mat_T(tierra.mat_trans * t.R_Y((int) (r_l += 4) % 360) * t.T(-0.035, 0.0, 0.0));
            luna.DrawTriangles(255, 255, 255);
            tierra.DrawTriangles(100, 100, 255);
            
            t.RotateY(marte, 0.531683601);
            marte.DrawTriangles(255, 100, 0);
            
            t.RotateY(jupiter, 0.094317032);
            jupiter.DrawTriangles(0, 0, 255);
            
            t.RotateY(saturno, 0.073944331);
            saturno.DrawTriangles(204, 153, 0);
            
            t.RotateY(urano, 0.051903345);
            urano.DrawTriangles(255, 255, 255);
            
            t.RotateY(neptuno, 0.026067961);
            neptuno.DrawTriangles(255, 0, 255);
        glEnd();
        glfwSwapBuffers(window);
        glfwPollEvents();

    } while( glfwGetKey(window, GLFW_KEY_ESCAPE ) != GLFW_PRESS &&
           glfwWindowShouldClose(window) == 0 );

    glfwTerminate();

    return 0;
}

