/* Key the values and find if the value is in the array*/

#include <bits/stdc++.h>

using namespace std;

int main (){
    int arr[10];

    for (int i = 0; i < 10; i++){
        cout << "Key the value " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Wich value you want ?\n";
    int count = 0, a = 0;
    cin >> a;
    for (int i = 0; i < 10; i++){
        if (a == arr[i]){
            cout << "The number " << a << " is in the index " << i;
            count += 1;
        }
        else if (count == 0 && i == 9){
            cout << "The number is not in the array\n";
        }
    }
}