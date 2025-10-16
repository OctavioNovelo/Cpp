/*Key the value and delete that value in the array*/

#include <bits/stdc++.h>

using namespace std;

int main (){
    int arr[10];
    int a;

    for (int i = 0; i < 10; i++){
        cout << "Key the value " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Wich value you want to delete ?\n";
    cout << "#: ";
    cin >> a;

    for (int i = 0; i < 10; i++){
        if (a == arr[i]){
            arr[i] = 0;
        }
    }
    cout << "The number " << a << " was delete.\n";
    for (int i = 0; i < 10; i++){
        cout << arr[i] << ", ";
    }
}