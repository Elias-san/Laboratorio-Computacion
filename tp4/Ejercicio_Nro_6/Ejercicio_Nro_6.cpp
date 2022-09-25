#include <iostream>


using namespace std;

int main (){

    int nro,pos=0,neg=0;

    cout << "Ingrese un numero: " << endl;
    cin >> nro;

    while (nro != 0){

        if (nro > 0){
            pos++;
        }else {
            neg++;
        }

        cout << "Ingrese un numero: " << endl;
        cin >> nro;

    }

    cout << "La cantidad de positivos es: "<< pos << endl;
    cout << "La cantidad de negativos es: "<< neg << endl;

    return 0;
}
