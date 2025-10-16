/*Crea un programa que ordene los elementos de un arreglo de manera
ascendente utilizado bubble sort*/

#include <iostream>

using namespace std;

int main(){
    int arr[5];
    int a = 0;

    for (int i = 0; i < 5; i++){
        cout << "Key the number " << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (arr[j] > arr[j + 1]){
                a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }

    for (int i = 0; i < 5; i++){
        cout << arr[i] << ", ";
    }
}