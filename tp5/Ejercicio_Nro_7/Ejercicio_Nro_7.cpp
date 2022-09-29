#include <iostream>

using namespace std;

int main()
{

    int peso,pesoCamion,camion,mayorPeso=0,encomiendas,nroCamion,cantEncomiendas;
    bool cargar;
    cout << "Ingrese peso de encomienda: " << endl;
    cin >> peso;
    camion = 1;
    while ( peso > 0 )
    {
        pesoCamion = 0;
        encomiendas=0;
        cargar = true;
        while ( cargar == true && peso > 0 )
        {

            if ((pesoCamion + peso) <= 200 ){
                pesoCamion += peso;
                encomiendas++;
                cout << "Ingrese peso de encomienda: " <<  " peso acumulado " << pesoCamion << endl;
                cin >> peso;
            } else {
                cargar = false;
            }


        }
        cout << " sali del while ******";
        cout << "El peso del camion nro: " << camion <<  " es " << pesoCamion  << endl;
        camion++;

        if (pesoCamion > mayorPeso )
        {
            mayorPeso = pesoCamion;
            nroCamion = camion;
            cantEncomiendas = encomiendas;
        }
    }

    cout << "El cambion con mayor encomiendas es: " << nroCamion << endl;
    cout << "El peso del camion es: " << mayorPeso << endl;
    cout << "La cantidad de encomiendas es: " << cantEncomiendas << endl;


    return 0;
}
