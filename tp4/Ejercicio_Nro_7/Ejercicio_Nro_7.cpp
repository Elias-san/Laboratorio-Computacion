#include <iostream>


using namespace std;

int main (){

    int nro,maximo;

    cout << "Ingrese un numero: " << endl;
    cin >> nro;
    maximo = nro;

    while (nro != 0){

       if (nro > maximo ){
            maximo = nro;
       }

        cout << "Ingrese un numero: " << endl;
        cin >> nro;

    }

    cout << "El numero maximo es: " << maximo;

    return 0;
}
