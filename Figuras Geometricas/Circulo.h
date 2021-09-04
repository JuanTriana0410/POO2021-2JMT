#include <iostream>
#include <stdlib.h>
#include <math.h>
// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;

class Circulo{
private:
    float radio, area, perimetro;
public:
    Circulo();
    Circulo(float radio);
    void calcularArea();
    void calcularPerimetro();
    void mostrarFigura();
    /////////////////////////
    void setRadio(float radio);
    float getRadio();
    float getArea();
    float getPerimetro();
};

