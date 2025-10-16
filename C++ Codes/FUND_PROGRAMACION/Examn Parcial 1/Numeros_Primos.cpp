// Ejercicios Examen Primer Parcial 
/* 
Escribir un programa que dado un número entre 1 y 50 realice lo siguiente:
a) Muestre en pantalla los números primos desde el 1 hasta el número generado.
b) Sume los dígitos del número usando un ciclo
Tips
• Para saber si es un numero primo debe tener exactamente 2 divisores: 1 y él mismo
• Puedes usar un Para/For anidado
• Puedes usar un contador
• Al principio del FOR no es necesario empezar en 1 porque ya sabemos que 1 es primo
*/

#include <iostream>

using namespace std;

int main () {

    int n, cont, sum;
    
    cout << "Ingrese el numero hasta donde se quiere sumar: ";
    cin >> n;
    if (n <= 0 || n > 50){
        cout << "Numero invalido" << "\n";
        cout << "Ingrese el numero hasta donde se quiere sumar: ";
        cin >> n;
    }
    for (int i = 1; i < n + 1; i++){
        for (int e = 1; e < n + 1; e++){
            if (i % e == 0){
                cont += 1;
                cout << "hola";
            }
        }
        if (cont == 2){
            cout << i << ", ";
            sum += i;
        }
        cont == 0;
    }
}