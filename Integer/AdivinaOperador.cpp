#include <iostream>


using namespace std;

long long a, b, c;

int main (){

    cin >> a >> b >> c;

    if(a + b == c){
        cout << '+' << "\n";
    }
    else if(a - b == c){
        cout << '-' << "\n";
    }
    else if(a * b == c){
        cout << '*' << "\n";
    }
    else if(a / b == c){
        cout << '/' << "\n";
    }
    else{
        cout << "D:" << "\n";
    }

    return 0;
}