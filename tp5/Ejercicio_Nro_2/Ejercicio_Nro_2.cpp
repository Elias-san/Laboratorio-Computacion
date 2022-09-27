#include <iostream>

using namespace std;

int main ()
{
    int nro,i,cPos,cNeg,maximpar,maxpar,totalpos=0;

    for(i =1; i <= 10; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> nro;
        cPos=0;
        cNeg=0;
        maxpar=0;
        maximpar=0;
        while(nro!=0)
        {

            if(nro%2== 0 )
            {
                if (nro > maxpar )
                {
                    maxpar = nro;
                };

            }
            else
            {
                if (nro > maximpar )
                {
                    maximpar = nro;
                };

            }

            if (nro > 0)
            {
                cPos++;
            }
            else
            {
                cNeg++;
            }

            cout << "Ingrese un numero: " << endl;
            cin >> nro;
        }
        totalpos +=cPos;
        cout << "El maximo numero par es: " << maxpar << endl;
        cout << "El maximo numero impar es: " << maximpar << endl;
        cout << "El porcentaje de numeros positivos es: " <<cPos*100/ (cPos + cNeg) << endl;
        cout << "El porcentaje de numeros negativos es: " <<cNeg*100/ (cPos + cNeg) << endl;

    }

    cout << "La cantidad de numeros positivos es: " << totalpos << endl;

    return 0;
}
