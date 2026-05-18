#include <iostream>

using namespace std;

long long a;
long long b;
long long c;

long long resultado;

int main(){

    cin >> a >> b >> c;
    long long A = a * a;
    long long B = b * b;
    long long C = c * c;

    long long Suma = A + B;


    if(Suma == C){
        cout << "SI";
    }
    else{
        cout << "NO";
    }

    return 0;

}