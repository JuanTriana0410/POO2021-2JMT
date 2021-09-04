#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

class Triangulo
{
private:
    float lado1, lado2, lado3, perimetro, area;
public:
    Triangulo();
    Triangulo(float ladoUno, float ladoDos, float ladoTres);
    void calcularPerimetro();
    void calcularArea();
    void mostrarFigura();
    // Gets and sets
    float getlado1();
    void setLado1(float lado1);
    float getlado2();
    void setLado2(float lado2);
    float getlado3();
    void setLado3(float lado3);
    float getPerimetro();
    float getArea();


};

















#endif