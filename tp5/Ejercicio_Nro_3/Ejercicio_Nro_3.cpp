#include <iostream>

using namespace std;

int main ()
{
    int nro,anterior,gOrdenados=0,i,cont ,pos,e,maximpar=0,primo;
    bool ordenados;

    for(i =1; i <= 10; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> nro;
        cImpar=0;
        primos = false;
        ordenados = false;

        while(nro!=0)
        {

            if (nro % 2 != 0 && nro > 0){
                cImpar++;
            }

            for (e=1; e <= nro;e++){
                if (nro % e == 0){
                    cont++;
                }
            }

            if (cont == 2 ){
                primo=nro;
                pos = e;
            }

            anterior = nro;
            cout << "Ingrese un numero: " << endl;
            cin >> nro;

            if (nro <= anterior){
                ordenados = true;
                gOrdenados++;
            } else {
                ordenados = false;
            }

        }

        cout << "El ultimo numero primo ingresado fue: " << primo << endl;
        cout << "En la posicion: " << pos << endl;
        if (cImpar > maximpar){
            maximpar = cImpar;
        }
    }

    cout << "La cantidad de grupos ordenados es: " << gOrdenados;


    return 0;
}
