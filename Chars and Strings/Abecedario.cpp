#include <iostream>


using namespace std;

int main(){

    char c;

    cin >> c;

    int i = (int)c;

    if(c >= 65 && c <= 90){

        cout << "Si";
    }
    else if(c >= 97 && c <= 122){

        cout << "Si";
    }
    else{
        cout << "No";
    }
}