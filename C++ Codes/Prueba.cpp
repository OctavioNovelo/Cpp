#include <bits/stdc++.h>

using namespace std;

int main(){
    long long p, q = 0, d = 0, c = 0;
    cin >> p;
    if (p >= 500){
        q += 1;
        p -= q * 500;
    }
    if (p >= 200){
        d += 1;
        p -= d * 200;
    }
    if (p >= 100){
        c += 1;
        p -= c * 100;
    }
    cout << q << " de 500, " << d << " de 200 y " << c << " de 100.";
    return 0;
}