#include <bits/stdc++.h>

using namespace std;

long long n;
long long a;
long long b;

long long funcion(){
    cin >> n;
    a += n + 45;
    a += n * 3;

    b += n % 89;
    b += n * 2;

    n = n + a;
    a += n % 70;
    a += n + 97;

    n = n % b;
    n = n * 4;
    n = n + a;
    
    return n;

}

int main(){

    long long m;

    cin >> m;

    long long arr[m];

    for(int i = 0; i < m; i++){
        arr[i] = funcion();
    }
    for(int i = 0; i < m; i++){
        cout << arr[i] << " ";
    }

    return 0;

}