#include "View.h"

View::View()
{
}

void View::mostrarMenuReportes()
{
    int opcion = -1;
    do
    {

        cout << "Reportes\n"
             << endl;
        cout << "1. Productos Restantes\n";
        cout << "2. Cantidad de productos del tipo Snack o licores\n";
        cout << "3. Ganancias obtenidas\n";
        cout << "4. Productos de la tienda\n";
        cout << "5. Valor a pagar por IVA a DIAN\n"; 
        cout << "0. Volver \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;
        switch (opcion)
        {
        case 1:
            laFarra.cantidadProucto();
            break;
        case 2:
            laFarra.cantProductosTipo();
            break;
        case 3:
            cout << "No pude hacerlo :c\n";
            break;
        case 4:
            laFarra.verProductosDisp();
            break;
        case 5:
            laFarra.IVAaDIAN();
            break;
        default:
            cout << "Opcion invalida\n";
            break;
        }
    } while (opcion != 0);
}

void View::mostrarMenu()
{
    int opcion = -1;
    do
    {

        cout << "Menu Tienda\n";
        cout << "1. Agregar Productos \n";
        cout << "2. Mostrar Productos \n";
        cout << "3. Vender \n";
        cout << "4. Mostrar Ventas \n";
        cout << "5. Reportes \n";
        cout << "0. Salir \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        switch (opcion)
        {

        case 1:
            laFarra.agregarProducto();
            break;
        case 2:
            laFarra.mostrarProductos();
            break;

        case 3:
            laFarra.vender();
            break;

        case 4:
            laFarra.mostrarFacturas();
            break;

        case 5:
            mostrarMenuReportes();
            break;
        }

    } while (opcion != 0);
}