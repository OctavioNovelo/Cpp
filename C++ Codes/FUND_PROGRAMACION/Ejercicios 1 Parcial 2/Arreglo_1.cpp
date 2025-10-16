// Solictar al usuario ingresar elementos de un arreglo y mostrarlo en pantalla

#include <iostream>

using namespace std;

int main (){
    int Num[5];

    for (int i = 0; i < 5; i++){
        cout << "Ingresa el numero " << i+1 << ": ";
        cin >> Num[i];
    }
    
    for (int i = 0; i < 5; i++){
        cout << "El indice " << i << " tiene el numero: " << Num[i] << "\n";
    }
}