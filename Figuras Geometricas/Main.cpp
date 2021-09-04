/*Ejercicio 1: Este programa tiene una clase llamada Rectangulo que tenga los siguientes
atributos: largo y ancho, y los siguientes metodos: calcularPerimetro() y calcularArea()
Modificado de Curso de programación en c++ .

Agregue un nuevo metodo privado llamado "mostrarFigura", este metodo debe mostrar el ancho,
largo, area y perimetro de la figura. Si el area y el perimetro estan en cero,
entonces el método debe primero llamar a los metodos para calcular area y perimetro. 


Canal programación ATS
*/

#include "View.h"

int main(){
    View figuras;
    figuras.mostrarMenu();
    system("pause");
    return 0;
}