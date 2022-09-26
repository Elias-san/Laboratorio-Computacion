#include <iostream>


using namespace std;

int main (){

    int nro,maximo;

    cout << "Ingrese un numero: " << endl;
    cin >> nro;
    if (nro%2 == 0 && nro !=0 ){
        maximo = nro;
    }

    while (nro != 0){

       if (nro%2 == 0 && nro > maximo ){
            maximo = nro;
       }

        cout << "Ingrese un numero: " << endl;
        cin >> nro;
    }

    cout << "El numero par maximo es: " << maximo;

    return 0;
}
