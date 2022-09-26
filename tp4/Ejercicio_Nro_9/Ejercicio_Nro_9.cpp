#include <iostream>


using namespace std;

int main (){

    int nro,maximo,pos,i;

    cout << "Ingrese un numero: " << endl;
    cin >> nro;
    if (nro !=0 ){
        maximo = nro;
        pos = 1;
        i=1;
    }

    while (nro != 0){

       if (nro > maximo ){
            maximo = nro;
            pos = i;
       }

        cout << "Ingrese un numero: " << endl;
        cin >> nro;
        i++;
    }

    cout << "El numero maximo es: " << maximo << endl;
    cout << " La posicion es: " << pos;

    return 0;
}
