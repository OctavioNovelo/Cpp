#include <iostream>

using namespace std;

int main(){

    int n;

    cin >> n;

    int suma[n];

    for(int i = 0; i < n; i++){
        cin >> suma[i];
        for(int j = 0; j < n; j++){
        suma[j] = suma[j] + suma[i + 1];
        cout << suma[j] << " ";
        }
    }
}