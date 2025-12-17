#include <iostream>

using namespace std;

long long a, b;
long long resultado, resultado2;

int main(){
    
    cin >> a >> b;

    if(a % b == 0){
        cout << a / b;
    }
    else if(a == -a || b == -b){
        return 0;
    }
    else{
        resultado = a % b;
        resultado2 = a / b;
        cout << resultado2 << " " << resultado << '/' << b;
    }
}