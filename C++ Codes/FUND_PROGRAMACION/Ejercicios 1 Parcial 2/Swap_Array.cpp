/*Reveres the array*/

#include <bits/stdc++.h>

using namespace std;

int main (){
    int arr[10];
    int arr2[10];
    int e = 9;

    for (int i = 0; i < 10; i++){
        cout << "Key the value " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++){
        arr2[e] = arr[i];
        e--;
    }
    for (int i = 0; i < 10; i++){
        cout << arr2[i] << ", ";
    }
}
