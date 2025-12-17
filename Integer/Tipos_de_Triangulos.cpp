#include <iostream>

using namespace std;

long long A;
long long B;
long long C;

int main(){

    cin >> A >> B >> C;

    if(A != B && A != C && B != A && B != C && C != A){
        cout << "escaleno";
        return 0;
    }
    else if(A == B && A != C && B != C || A != B && B == C && C != A || C == A && C != B && A != B){
        cout << "isosceles";
        return 0;
    }
    else if(A == B && B == C && A == C){
        cout << "equilatero";
        return 0;
    }
}