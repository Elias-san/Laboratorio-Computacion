#include <iostream>

using namespace std;

int main(){
    /*
     4) Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avi�n y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupaci�n y el porcentaje de no ocupaci�n del mismo.
    Ejemplo si el avi�n tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de ocupaci�n que se informar� ser� de un 40% y el porcentaje de no ocupaci�n ser� de un 60%.
    */

    int disponibles,ocupados,
    pocupados, pdesocupados;

    cout << "Ingrese asientos disponibles: " << endl;
    cin >> disponibles;
    cout << "Ingrese asientos ocupados: " << endl;
    cin >> ocupados;

    pocupados = ocupados * 100 / disponibles;
    pdesocupados = 100 - pocupados;

    cout << "El porcentaje de asientos ocupados es: " << pocupados << " % " << endl;
    cout << "El porcentaje de asientos desocupados es: " << pdesocupados << " % " << endl;

    return 0;

}

