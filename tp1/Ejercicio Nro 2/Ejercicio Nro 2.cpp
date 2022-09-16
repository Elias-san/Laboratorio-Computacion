#include <iostream>


using namespace std;

int main(){
/*
     2) Hacer un programa que solicite por teclado que se ingresen dos números y luego
    guardarlos en dos variables distintas. A continuación se deben intercambiar mutuamente los
    valores en ambas variables y mostrarlos por pantalla.
    Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B,
    entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
    */
    int a,b,aux;
    cout << "Igrese primer numero: " << endl;
    cin >> a;
    cout << "Ingrese segndo numero: " << endl;
    cin >> b;
    aux = a;
    a = b;
    b = aux;
    cout << "Nro ingesado en A ahora es: " << a << endl;
    cout << "Nro ingesado en B ahora es:: " << b << endl;
    return 0;
}




