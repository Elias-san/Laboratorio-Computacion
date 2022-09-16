#include <iostream>

using namespace std;

int main()
{
    /*
    6
    Hacer un programa para que un comercio ingrese por teclado la recaudación
    en pesos para cada una de las cuatro semanas del mes. El programa debe listar
    la recaudación promedio por semana y el porcentaje de recaudación por semana.
    Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como
    recaudación promedio $ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
    */

    int s1,s2,s3,s4,total,promedio;

    cout << "Ingresar recaudacion semana 1: " << endl;
    cin >> s1;
    cout << "Ingresar recaudacion semana 2: " << endl;
    cin >> s2;
    cout << "Ingresar recaudacion semana 3: " << endl;
    cin >> s3;
    cout << "Ingresar recaudacion semana 4: " << endl;
    cin >> s4;

    total = s1 + s2 + s3 + s4;
    promedio = total / 4;

    cout << "El porcentaje recaudado de la semana 1 es: " << s1 * 100 / total << " % " << endl;
    cout << "El porcentaje recaudado de la semana 2 es: " << s2 * 100 / total << " % " << endl;
    cout << "El porcentaje recaudado de la semana 3 es: " << s3 * 100 / total << " % " << endl;
    cout << "El porcentaje recaudado de la semana 4 es: " << s4 * 100 / total << " % " << endl;
    cout << "El promedio de recaudacion es: " << promedio;

    return 0;
}
