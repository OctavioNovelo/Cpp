/* Cuando pones una estación de radio compras un segmento de frecuencias para tu radio. 
La franquicia "Mejores Casters Universales" (MCU) decidió comprar las frecuencias .Por otro lado, 
"Destructores de Casters" (DC) compro las frecuencias .Tu tarea consiste en determinar 
si existe o no un traslape entre las radios.*/

#include <iostream>

using namespace std;

int main(){

    long long a, b, c, d;
    long long mcu;

    cin >> a >> b >> c >> d;

    mcu = b - a;

    if(a > b){
        cout << "No" << endl;
    }
    else if(a > c && a > d && b > c && b > d){
        long long dc = d - c;
        if((dc) == d || c){
            if(a > dc){
                cout << "No" << endl;
                return 0;
            }
            else if(b > dc){
                cout << "No" << endl;
                return 0;
            }
            else if(b <= (dc + c)){
                cout << "Si" << endl;
            }
            else{
                cout << "Si" << endl;
                return 0;
            }
        }
    }
    else if(a == c || a == d){
        cout << "Si" << endl;
    }
    else if(b == c || b == d){
        cout << "Si" << endl;
    }
    else if(c <= (mcu + a)){
        cout << "Si" << endl;
    }
    else if(d <= (mcu + a)){
        cout << "Si" << endl;
    }
    else{
        cout << "No" << endl;
    }
}