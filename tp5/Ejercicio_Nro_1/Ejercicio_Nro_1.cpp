#include <iostream>

using namespace std;

int main (){
    int nro,i,e,cont,primos=0;

    for(i =1; i <= 10;i++){
         cout << "Ingrese un numero: " << endl;
         cin >> nro;
        cont = 0;
        for (e=1; e<= nro; e++){
            if (nro%e == 0 ){
                cont++;
            }
        }
        if (cont == 2 ) {
            primos++;
        }
    }

    cout << "La cantidad de numeros primos es: " << primos;

    return 0;
}
