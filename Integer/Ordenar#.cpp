#include <iostream>

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    if(a == b && b == c && a == c){
        cout << a << " " << b << " " << c << endl;
    }
    else if(a < b && b < c){
        cout << a << " " << b << " " << c << endl;
    }
    else if(a < b && b > c && c < a){
        cout << c << " " << a << " " << b << endl;
    }
    else if(a < b && b > c){
        cout << a << " " << c << " " << b << endl;
    }
    else if(a > b && b < c){
        cout << a << " " << c << " " << b << endl;
    }
    else if(a > b && b < c){
        cout << c << " " << a << " " << b << endl;
    }
    else if(a > b && b > c){
        cout << c << " " << b << " " << a << endl;
    }
}