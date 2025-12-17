#include <iostream>
#include <list>

using namespace std;

list<double> Numeros1;
double a, b;
list<double> Numeros2;
double a1, b1;

int main(){

    cin >> a >> b;
    cin >> a1 >> b1;

    if(a == a1){
        cout << "1\n";
    }
    else if(a == b1){
        cout << "1\n";
    }
    else if(b == a1){
        cout << "1\n";
    }
    else if(b == b1){
        cout << "1\n";
    }
    else if(a1 == a){
        cout << "1\n";
    }
    else if(a1 == b){
        cout << "1\n";
    }
    else if(b1 == a){
        cout << "1\n";
    }
    else if(b1 == b){
        cout << "1\n";
    }
    else{
        cout << "0\n";
    }
}


/*
  cin >> a >> b;
    cin >> a1 >> b1;

    if(Numeros1 == Numeros2){
        cout << "1 \n";
    }
    else{
        cout << "0 \n";
    }
}
*/