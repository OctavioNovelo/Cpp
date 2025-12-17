#include <iostream>

using namespace std;

long long n;

int main(){
    cin >> n;
    if(n == 1){
        cout << "No";
        return 0;
    }
    for(int x = 2;x < n; x++){
        if(n % x == 0){
            cout << "No";
            return 0;
        }
    }
    cout << "Si" << "\n";

    
}