#include <iostream>


using namespace std;

int main (){

    int nro,maximo,minimo;

    cout << "Ingrese un numero: " << endl;
    cin >> nro;
    if (nro !=0 ){
        maximo = nro;
       minimo = nro;
    }

    while (nro != 0){

       if (nro > maximo ){
            maximo = nro;
       }

       if (nro < minimo){
            minimo = nro;
       }

        cout << "Ingrese un numero: " << endl;
        cin >> nro;

    }

    cout << "El numero maximo es: " << maximo << endl;
    cout << "El numero minimo es: " << minimo;

    return 0;
}
