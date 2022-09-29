#include <iostream>

using namespace std;

int main()
{

    int nro,i,total,
        cont,promedio,minimo=0,posicion,grupo;

    cout << "Ingrese un numero: " << endl;
    cin >> nro;

    for (i = 1 ; i <= 10; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> nro;
        total=0;
        cont=0;
        promedio=0;
        while ( nro != 0 )
        {
            if ( nro < minimo || minimo == 0){
                minimo = nro;
                posicion = cont;
                grupo = i;
            }
            total +=nro;
            cont++;
            cout << "Ingrese un numero: " << endl;
            cin >> nro;
        }
        promedio = total / cont;
        cout << "El promedio del grupo es: " << promedio << endl;

    }

    cout << "El numero minimo de todos los grupos es: " << minimo << endl;
    cout << "Posicion: " << posicion << endl;
    cout << "Grupo: " << grupo << endl;


    return 0;
}
