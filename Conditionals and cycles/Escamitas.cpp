#include <iostream>

using namespace std;

long long T;

int main(){

    cin >> T;

    if(T > 0 && T < 15){
        cout << "fria!" << "\n" << "RIP escamitas :(\n";
    }
    else if(T >= 15 && T < 21){
        cout << "fria! \n";
    }
    else if(T >= 21 && T <= 29){
        cout << "tibia \n";
    }
    else if(T > 29 && T <= 34){
        cout << "caliente! \n";
    }
    else if(T > 34 && T < 100){
        cout << "caliente!" << "\n" << "RIP escamitas :(\n";
    }
}