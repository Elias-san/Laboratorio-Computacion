#include <iostream>


using namespace std;

int main (){

    int nro1,nro2,menor,mayor,i;

    cout << "Ingrese un numero: " << endl;
    cin >> nro1;

    cout << "Ingrese otro numero: " << endl;
    cin >> nro2;

    if (nro1 > nro2){
        mayor = nro1;
        menor = nro2;
    } else {
        mayor = nro2;
        menor = nro1;
    }

    i = menor;
    while (i <= mayor){
        cout << i << endl;
        i++;
    }

    return 0;
}
