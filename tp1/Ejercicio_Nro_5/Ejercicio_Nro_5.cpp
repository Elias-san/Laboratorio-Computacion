#include <iostream>

using namespace std;

int main()
{
    /*
    5)
    Un comercio vende tres marcas de alfajores distintas A, B y C.
    Hacer un programa para ingresar por teclado la cantidad de alfajores
    vendidos de cada
    una de las tres marcas y luego se informe el porcentaje de ventas
    para cada una de ellas.

    Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces
    el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
    */

    int a,b,c,total;
    cout << "Ingrese cantidad vendida de la marca A: " << endl;
    cin >> a;
    cout << "Ingrese cantidad vendida de la marca B: " << endl;
    cin >> b;
    cout << "Ingrese cantidad vendida de la marca C: " << endl;
    cin >> c;

    total = a + b + c;

    cout << "Porcentaje vendido por la marca A: " << a * 100 / total << " % " << endl;
    cout << "Porcentaje vendido por la marca B: " << b * 100 / total << " % " << endl;
    cout << "Porcentaje vendido por la marca B: " << c * 100 / total << " % " << endl;

    return 0;
}
