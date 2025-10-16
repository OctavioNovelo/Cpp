/* Count how many time the numbers repeat himself in the array*/

#include <bits/stdc++.h>

using namespace std;

int main (){
    int arr[10];
    int e = 0;
    int count = 0;

    cout << "Wich number you want to check ?\n" << "#: ";
    cin >> e;
    for (int i = 0; i < 10; i++){
        cout << "Key the value " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++){
        if (arr[i] == e){
            count += 1;
        }
    }
    cout << "The number repeats himself " << count << " times.\n";
}