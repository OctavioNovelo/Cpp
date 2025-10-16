/*Pide al usuario ingresar un arreglo y encuentra el valor 
maximo y minimo*/

#include <iostream>

using namespace std;

int main (){
    int arr[10];
    for (int i = 0; i < 10; i++){
        cout << "Key the number " << i+1 << ": ";
        cin >> arr[i];
    }
    int max = 0;
    int min = 0;
    min = arr[0];
    max = arr[0];

    for (int i = 0; i < 10; i++){
        for (int j = i+1; j < 10; j++){
            if (min > arr[j]){
                min = arr[j];
            }
            if (max < arr[j]){
                max = arr[j];
            }
        }
    }
    
    cout << "The max number is: " << max << "\n";
    cout << "The min number is: " << min << "\n";
}