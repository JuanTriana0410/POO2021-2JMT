#include "Circulo.h"

Circulo::Circulo(float radio){
    cout <<"Estoy construyendo un nuevo circulo\n";
    this->radio = radio;
    this->area = 0;
    this-> perimetro = 0;
}
Circulo::Circulo(){
    cout <<"Estoy construyendo un nuevo circulo\n";
    this->radio = 0;
    this->area = 0;
    this-> perimetro = 0;
}
void Circulo::calcularArea(){
    this->area = M_PI * pow(this->radio, 2);
}

void Circulo::calcularPerimetro(){
    this->perimetro = 2*M_PI*this->radio;
}

void Circulo::mostrarFigura(){
    cout <<"El radio es: " << radio << "\n";
    cout <<"El area es: " << area << "\n";
    cout <<"El perimetro es: " << perimetro << "\n";
}

void Circulo::setRadio(float radio){
    this->radio = radio;
}

float Circulo::getRadio(){
    return this->radio;
}

float Circulo::getPerimetro(){
    return this->perimetro;
}

float Circulo::getArea(){
    return this->area;
}