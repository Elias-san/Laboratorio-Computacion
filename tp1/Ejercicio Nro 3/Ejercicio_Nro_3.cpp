#include <iostream>

using namespace std;

int main(){
    /*
    3) Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 más $ 2.000
    de premio por cada auto vendido. Hacer un programa que permita ingresar por teclado la
    cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a
    pagar.
    Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de
    $ 23.000.
    */

    int fijo = 15000;
    int premio = 2000;
    int sueldo, cantidad;

    cout << "Ingrese la cantidad de autos vendidos: " << endl;
    cin >> cantidad;

    sueldo = fijo + (cantidad * premio);
    cout << "El sueldo a pagar al vendedor es: " << sueldo;

    return 0;
}
