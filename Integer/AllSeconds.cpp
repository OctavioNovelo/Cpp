/* Link: https://omegaup.com/arena/Algoritmia/#problems/Cada-Segundo-Cuenta */
#include <iostream>

using namespace std;

int main(){

    int a, b, seconds;

    cin >> a >> b;

    if(a - b == 1){
        cout << "ATRASAR" << " " << "1" << " " << "SEGUNDO" << endl;
        return 0;
    }
    else if(b - a == 1){
        cout << "ADELANTAR" << " " << "1" << " " << "SEGUNDO" << endl;
        return 0;
    }
    else if(a < b){
        seconds = b - a;
        cout << "ADELANTAR" << " " << seconds << " " << "SEGUNDOS" << endl;
        return 0;
    }
    else if(a > b){
        seconds = a - b;
        cout << "ATRASAR" << " " << seconds << " " << "SEGUNDOS" << endl;
        return 0;
    }
}