/* Link: https://omegaup.com/arena/Algoritmia/#problems/Intervalos */
#include <iostream>

using namespace std;

int main(){

    long long a, b, c;

    cin >> a >> b >> c;

    if(c >= a && c <= b){
        cout << "INTERVALO" << endl;
        return 0;
    }
    else if(c < a && c < b){
        cout << "IZQUIERDA" << endl;
        return 0;
    }
    else if(c > a && c > b){
        cout << "DERECHA" << endl;
        return 0;
    }

}