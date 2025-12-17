//Link: https://omegaup.com/course/Seleccion_YUC2023/assignment/Funciones#problems

#include <bits/stdc++.h>

using namespace std;

long long n;

long long funcion(){
    cin >> n;
    n = n + 5;
    n = n + 5;
    n = n * 2;
    n = n + 5;
    n = n % 31;
    n = n * 2;
    n = n * 2;
    n = n + 5;
    n = n * 2;
    n = n % 31;
    n = n * 2;
    n = n % 31;
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