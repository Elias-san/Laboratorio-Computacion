#include <iostream>

using namespace std;

int main(){

    int nro,i,cont,anterior=0;
    bool ordenado = true;
    cout << "Ingrese numero: " << endl;
    cin >> nro;

    while (nro!=0){
            cont = 0;
            for (i = 1;i<=nro;i++){
                if( nro%i == 0 )
                    cont++;
            }

            if ( cont == 2 ){
                if ( nro > anterior ){
                    anterior = nro;
                } else {
                    ordenado = false;
                }
            }

        cout << "Ingrese numero: " << endl;
        cin >> nro;
    }
    if ( ordenado ){
        cout << "Los numeros primos estan ordenados..";
    } else {
        cout << "Los numeros primos  estan desordenados..";
    }


    return 0;
}
