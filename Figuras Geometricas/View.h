#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <stdlib.h>


#include "Rectangulo.h"
#include "Circulo.h"
#include "Triangulo.h"

const int CAP = 10;

using std::cin;
using std::cout;
using std::endl;


class View{
private:
    int cantidadRec;
    int cantidadTri;
    int cantidadCir;
    Triangulo triangulos[CAP];
    Rectangulo rectangulos[CAP];
    Circulo cicurlos[CAP];
public:
    View();
    void mostrarMenu();
    void agregarTriangulo();
    void agregarRectangulo();
    void agregarCiruculo();
    void mostrarTriangulos();
    void mostrarCirculos();
    void mostrarRectangulos();
};





#endif