#include "View.h"

View::View(){
    this->cantidadCir = 0;
    this->cantidadRec = 0;
    this->cantidadTri = 0;
}

void View::agregarCiruculo(){
    float radio;
    int opc;
    if(cantidadCir + 1 > CAP){
        cout <<"No hay mas slots\n";
        return;
    }
    cout << "Ingrese el radio: \n";
    cin >> radio;
    //Crear objeto
    Circulo circuloPlus(radio);
    circuloPlus.calcularArea();
    circuloPlus.calcularPerimetro();
    circuloPlus.mostrarFigura();
    cout << "Desea agregar el circulo\n1. Si\2.No\n";
    cin >> opc;
    if (opc == 1)
    {
        cicurlos[cantidadCir] = circuloPlus;
        this->cantidadCir += 1;
        return;
    }
    
    
}

void View::agregarTriangulo(){
    float lado1, lado2, lado3;
    int opc;
    if(cantidadTri + 1 > CAP){
        cout <<"No hay mas slots\n";
        return;
    }
    cout << "Ingrese el lado 1: \n";
    cin >> lado1;
    cout << "Ingrese el lado 2: \n";
    cin >> lado2;
    cout << "Ingrese el lado 3: \n";
    cin >> lado3;
    //Crear objeto
    Triangulo trianguloPlus(lado1, lado2, lado3);
    trianguloPlus.calcularArea();
    trianguloPlus.calcularPerimetro();
    trianguloPlus.mostrarFigura();
    cout << "Desea agregar el circulo\n1. Si\2.No\n";
    cin >> opc;
    if (opc == 1)
    {
        triangulos[cantidadTri] = trianguloPlus;
        this->cantidadTri += 1;
        return;
    }
    
    
}

void View::agregarRectangulo(){
    float largo, ancho;
    int opc;
    if(cantidadRec + 1 > CAP){
        cout <<"No hay mas slots\n";
        return;
    }
    cout << "Ingrese el largo: \n";
    cin >> largo;
    cout << "Ingrese el ancho: \n";
    cin >> ancho;
    //Crear objeto
    Rectangulo rectanguloPlus(ancho, largo);
    rectanguloPlus.calcularArea();
    rectanguloPlus.calcularPerimetro();
    rectanguloPlus.mostrarFigura();
    cout << "Desea agregar el circulo\n1. Si\2.No\n";
    cin >> opc;
    if (opc == 1)
    {
        rectangulos[cantidadRec] = rectanguloPlus;
        this->cantidadRec += 1;
        return;
    }
    
    
}

void View::mostrarCirculos(){
    int i;
    if (cantidadCir == 0)
    {
        cout << "No hay elementos que mostrar\n";
    }
    else{
        for ( i = 0; i < cantidadCir; i++){
            cout << "Circulo #" << i + 1 << "\n";
            cicurlos[i].mostrarFigura();
        }
        
    }
    
}

void View::mostrarRectangulos(){
    int i;
    if (cantidadRec == 0)
    {
        cout << "No hay elementos que mostrar\n";
    }
    else{
        for ( i = 0; i < cantidadRec; i++){
            cout << "Rectangulo #" << i + 1 << "\n";
            rectangulos[i].mostrarFigura();
        }
        
    }
    
}

void View::mostrarTriangulos(){
    int i;
    if (cantidadTri == 0)
    {
        cout << "No hay elementos que mostrar\n";
    }
    else{
        for ( i = 0; i < cantidadTri; i++){
            cout << "Triangulo #" << i + 1 << "\n";
            triangulos[i].mostrarFigura();
        }
        
    }   
}

void View::mostrarMenu(){
     int choice;
     do{
         cout << "\n\n   MENU FIGURAS \n"
         << "1. Agregar Rectangulo\n"
         << "2. Agregar Triangulo\n"
         << "3. Agregar Circulo\n"
         << "4. Mostrar Rectangulos\n"
         << "5. Mostrar Triangulos\n"
         << "6. Mostrar Circulos\n"
         << "o. EXIT\n"
         << "OPC:";
         cin >> choice; cout << "\n ";
         switch(choice){
              case 1:
               agregarRectangulo(); break;
              case 2:
               agregarTriangulo(); break;
              case 3:
               agregarCiruculo(); break;
              case 4:
               mostrarRectangulos(); break;
              case 5:
               mostrarTriangulos(); break;
              case 6:
               mostrarCirculos(); break;
              case 0: 
               break;
         }
     } while (choice != 0);
     return;
}