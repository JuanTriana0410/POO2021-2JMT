#include "triangulo.h"
#include <math.h>

Triangulo::Triangulo(float ladoUno, float ladoDos, float ladoTres){
    cout << "Estoy creando un triangulo vacio...\n";
    this->lado1 = ladoUno;
    this->lado2= ladoDos;
    this->lado3= ladoTres;
    this->area = 0;
    this->perimetro = 0;
}
Triangulo::Triangulo(){
    cout << "Estoy creando un triangulo vacio...\n";
    this->lado1 = 0;
    this->lado2= 0;
    this->lado3= 0;
    this->area = 0;
    this->perimetro = 0;
}
void Triangulo::calcularArea(){
    if (perimetro == 0){
        calcularPerimetro();
    }
    float semiArea = perimetro/2;
    this->area = sqrt(semiArea*(semiArea - this->lado1)*(semiArea - this->lado2)*(semiArea - this->lado3));

}

float Triangulo::getArea(){
    return this->area;
}

void Triangulo::calcularPerimetro(){
    this->perimetro = lado1 + lado2 + lado3;
}

float Triangulo::getPerimetro(){
    return this->perimetro;
}

float Triangulo::getlado1(){
    return this->lado1;
}

void Triangulo::setLado1(float lado1){
    this->lado1 = lado1;
}

float Triangulo::getlado2(){
    return this->lado2;
}

void Triangulo::setLado2(float lado2){
    this->lado2 = lado2;
}

float Triangulo::getlado3(){
    return this->lado3;
}

void Triangulo::setLado3(float lado3){
    this->lado3 = lado3;
}

void Triangulo::mostrarFigura()
{
    cout <<"El lado 1 es: " << lado1 << "\n";
    cout <<"El lado 2 es: " << lado2 << "\n";
    cout <<"El lado 3 es: " << lado3 << "\n";    
    cout <<"El area es: " << area << "\n";
    cout <<"El perimetro es: " << perimetro << "\n"; 
}