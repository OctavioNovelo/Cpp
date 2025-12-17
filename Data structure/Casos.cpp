#include <iostream>
using namespace std;

int opcion, a, b, mayor, menor;

int main(){
    cin >> opcion;
    cin >> a;
    cin >> b;

    switch (opcion) {
        case 1:
            if(a >= b){
                mayor = a;
                cout << mayor;
            }
            else{
                mayor = b;
                cout << mayor;
            }
            break;
        case 2:
            if(a < b){
                menor = a;
                cout << menor;
            }
            else{
                menor = b;
                cout << menor;
            }
            break;
        case 3:
            if(a + b < a - b){
                menor = a + b;
                cout << menor;
            }
            else{
                menor = a - b;
                cout << menor;
            }
            break;
        case 4:
            if(a + b > a - b){
                mayor = a + b;
                cout << mayor;
            }
            else{
                mayor = a - b;
                cout << mayor;
            }

    return 0;
}
}