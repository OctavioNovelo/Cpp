// Ejercicios Examen Primer Parcial
/*Realizar un programa que solicite al usuario su tipo de plan telefónico y el número de MB 
consumidos. Si los MB sobrepasan el límite establecido se cobra $ 0.20 por cada MB adicional. Si el 
plan tarifario no está entre las opciones mostrar un mensaje de error.
Los planes tarifarios son:
a. Básico (1024 MB)
b. Intermedio (2048 MB)
c. Avanzado (4096 MB)
d. Ilimitado
Se debe imprimir como resultado el total a pagar. */

#include <iostream>

using namespace std;

int main(){
    float n;
    char p;

    cout << "Ingresa que tipo de plan tienes: ";
    cin >> p;
    cout << "Ingresa la cantidad de megas: ";
    cin >> n;

    switch (p){
        case 'a':
            if (n > 1024){
                n = (n-1024)*0.20;
                cout << n << "\n";
                break;
            }
        case 'b':
            if (n > 2048){
                n = (n-2048)*0.20;
                cout << n << "\n";
                break;
            }
        case 'c':
            if (n > 4069){
                n = (n-4096)*0.20;
                cout << n << "\n";
                break;
            }
        case 'd':
            cout << 0;
            break;
        default:
            cout << "Error";
    }
}