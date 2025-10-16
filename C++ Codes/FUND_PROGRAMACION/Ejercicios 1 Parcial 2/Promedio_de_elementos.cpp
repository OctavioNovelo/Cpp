/* Lo mismo que Suma_Elemenos solo que este saca promedio*/
/*El usuario ingresa un arreglo, se muestra la suma y se muestra los elementos*/

#include <iostream>

using namespace std;

int main (){
    int n = 0;
    cout << "Tamano del arreglo: ";
    cin >> n;
    int num[n];
    int sum = 0;
    for (int i = 0; i < n; i++){
        cout << "Ingresa el numero " << i+1 << ": ";
        cin >> num[i];
        sum += num[i];
    }
    
    for (int i = 0; i < n; i++){
        cout << "El indice " << i << " tiene el numero: " << num[i] << "\n";
    }

    cout << "El promedio es: " << sum/n << "\n";
}