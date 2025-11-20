//Buscar si un numero se encuentra en un arreglo

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, mitad, primero, ultimo, x, vector[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    primero = 0;
    long long vectorsize = sizeof(vector) / sizeof(vector[0]);
    ultimo = vectorsize - 1;
    x = 0;

    cout << "Ingresa el Numero a buscar: ";
    cin >> n;
    while (primero <= ultimo && x == 0)
    {
        mitad = (primero + ultimo) / 2;
        if(n == vector[mitad]){
            x = 1;
        }
        if(n < vector[mitad]){
            ultimo = mitad - 1;
        }
        if(n > vector[mitad]){
            primero = mitad + 1;
        }
    }

    if(x == 1 ){
        cout << "El numero" << " " << n << " " << "se enceuntra en el arreglo";
    }
    else{
        cout << "El numero" << " " << n << " " << "no se enceuntra en el arreglo";
    }

    return 0;
    
}



