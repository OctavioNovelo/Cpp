#include <iostream>

using namespace std;

long long n;
/*
int n;
n++ ; se usa el valor dee n primero y luego se incremente en 1
++n ; se incrementa en 1 y luego se usa el valor de n

*/
int main(){
    // While 
    cin >> n;
    int con = 0;

    while(con < n){
        cout << con * 2 << "/n";
        con++;
    }

    // For
   for(int con2 = 1/*Primer parte*/;/*Segunda Parte*/con2 < n;/*Tercera Parte*/){
        cout << con2 * 2 << "/n";
        con2++;
    }

    // do / while

    do{
        con < n;
    }while(cout << "Si");
}

