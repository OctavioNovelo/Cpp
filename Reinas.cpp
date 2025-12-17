#include <iostream>
#include <cmath> //para abs
using namespace std;
int cont=0;

//checar que no se ataquen las reinas
bool comprobar(int reinas[], int n, int k) {
	int i;
	for(i=0; i<k; i++) {
		if((reinas[i]==reinas[k]) || (abs(k-i)==abs(reinas[k]-reinas[i]))) {
			return false;
		}
	}
	return true;

}



//indica que se encontro una solucion y entonces ya no hay reinas para colocar
void Nreinas(int reinas[],int n, int k) {
	if(k==n) { //el nivel de reinas es igual al nivel del arbolito, ya se ocuparon todas las reinas
		cont=cont+1;
		cout<< "Snum " <<cont <<":  ";
		for(int i=0; i<n; i++) {
			cout<<reinas[i] <<" , ";
		}
		cout<<"\n";
	}
	else { //aun quedan algunas reinas que poner
		for(reinas[k]=0; reinas[k]<n; reinas[k]++) {
			if(comprobar(reinas,n,k)) { //comprobar si no se atacan
				Nreinas(reinas,n,k+1);
			}
		}
	}
}

int main()
{
	int k=0; //nivel del arbolito donde se encuntra, 0 es hasta arriba
	int cant; //nC:mero de reinas que se quiere, seria 8
	cout<<"Ingrese la cantidad de reinas: ";
	cin>>cant;
	int reinas[cant];
	for(int i=0; i<cant; i++) { //poner todos los valores en -1 para que no esten en el tablero
		reinas[i]= -1;
	}

	Nreinas(reinas,cant,k); //la respuesta

}