#include <iostream>

using namespace std;

int Numero1;
int Numero2;

int main(){
    cin >> Numero1;
    cin >> Numero2;

    if(Numero1 % Numero2 == 0 or Numero2 % Numero1 == 0){
        cout << "multiplos";
    }
    else{
        cout << "no multiplos";
    }
}