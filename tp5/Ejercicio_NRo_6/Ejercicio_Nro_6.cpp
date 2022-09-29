#include <iostream>

using namespace std;

int main (){
    int i,nro,actual=0,cont,primos,minpar,e,anteUltimo,ultimo;

    for (i=1; i <= 10; i++ ){
        cout << "Ingrese un numero: " << endl;
        cin >> nro;
        cont=0;
        primos=0;
        minpar = 0;
        while ( nro > actual ){

            for ( e =1 ; e <= nro; e++){
                if ( nro%2 == 0 ) {
                    cont++;
                }
            }

            if ( cont == 2 ){
                primos++;

            }

            if ( nro % 2 == 0 ){
                if ( nro < minpar || minpar == 0 ) {
                    minpar = nro;
                }

            }


            actual = nro;

            if (actual > 0 ) {
                anteUltimo = actual;
            }

            cout << "Ingrese un numero: " << endl;
            cin >> nro;
            if ( nro > 0 ){
                ultimo = nro;
            }
        }
        cout << "La cantidad de numeros primos es: " << primos << endl;
        cout << "El minimo numero par es: " << minpar << endl;
        cout << "El ultimo numero positivo es : " << ultimo << endl;
        cout << "El ante ultimo numero positivo es : " << anteUltimo<< endl;



    }
    return 0;
}
