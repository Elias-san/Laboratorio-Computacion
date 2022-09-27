#include <iostream>


using namespace std;

int main (){

    int nro,maxN=0,minP=0;

    cout << "Ingrese un numero: " << endl;
    cin >> nro;

    while (nro != 0){
       if (nro < 0 ){
            if (nro > maxN || maxN == 0){
                maxN = nro;
            }
       } else {
       if (nro < minP || minP == 0){
            minP = nro;
       }
       }

        cout << "Ingrese un numero: " << endl;
        cin >> nro;

    }

    cout << "El maximo negativo es: " << maxN << endl;
    cout << "El minimo positivo es: " << minP;

    return 0;
}
