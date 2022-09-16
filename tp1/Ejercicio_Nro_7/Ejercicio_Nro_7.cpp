#include <iostream>

using namespace std;

int main(){
    /*
     7
        Hacer un programa para ingresar por teclado el importe de una venta
         y el porcentaje de descuento aplicada a la misma y luego informar por
         pantalla el importa a pagar.
        Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15%
        entonces el total a pagar será de $ 1.020.
        Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el
         0% entonces el total a pagar será de $ 800.
    */

    float importe, pagofinal;
    int descuento;

    cout << "Ingrese importe: " << endl;
    cin >> importe;
    cout << "Ingrese descuento: " << endl;
    cin >> descuento;

    pagofinal = importe * (100 - descuento) / 100;

    cout << "El pago con descuento es: " << pagofinal;
    return 0;
}
