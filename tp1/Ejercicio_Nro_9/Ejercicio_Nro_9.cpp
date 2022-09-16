#include <iostream>

using namespace std;

int main(){

    int mIngresados,minutos,horas,seg;

    cout << "Ingrese minutos: ";
    cin >> mIngresados;

    horas = mIngresados / 60;
    minutos = mIngresados % 60;

    cout << "La cantidad de horas es: " << horas << " hs y " << minutos << " minutos";

    return 0;
}
