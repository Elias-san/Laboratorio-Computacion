///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
///¿Cómo sería para dos ceros consecutivos?

int main(){
	int cantCeros=0, n, suma=0,previo;
    bool seguir=true;
	while(seguir){///equivalente a seguir==true
		cout<<"INGRESE UN NUMERO: ";
		cin>>n;
		previo = n;
		suma+=n;
		if(n==0 && previo ==0) seguir = false;
		//if(cantCeros==2) seguir=false;
		}
	cout<<"SUMA: "<<suma<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
