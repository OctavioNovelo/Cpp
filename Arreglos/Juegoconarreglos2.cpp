//Link: https://omegaup.com/course/Seleccion_YUC2023/assignment/Funciones#problems

#include <bits/stdc++.h>

using namespace std;

long long n;

long long funcion(){
    cin >> n;
    n = n + 10;
    n = n + 2;
    n = n * 3;
    n = n + 125;
    n = n % 77;
    n = n * 6;
    n = n * 2;
    n = n + 99;
    n = n * 4;
    n = n % 123;
    n = n * 7;
    n = n % 88;
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