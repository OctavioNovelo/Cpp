/*El usuario ingresa un arreglo, se muestra la suma y se muestra los elementos*/

#include <iostream>

using namespace std;

int main (){
    int num[10];
    int sum = 0;
    for (int i = 0; i < 5; i++){
        cout << "Ingresa el numero " << i+1 << ": ";
        cin >> num[i];
        sum += num[i];
    }
    
    for (int i = 0; i < 5; i++){
        cout << "El indice " << i << " tiene el numero: " << num[i] << "\n";
    }

    cout << "La suma total es: " << sum << "\n";
}