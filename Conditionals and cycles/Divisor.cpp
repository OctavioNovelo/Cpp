#include <iostream>

using namespace std;

int main(){

    long long a, b, c;
    long long div1, div2;

    cin >> a >> b >> c;

    if(a < 0 || b < 0 || c < 0){
        cout << "-1" << endl;
    }
    else if(a == b && b == c){
        cout << a << endl;
        return 0;
    }
    else if(a == b && b != c || a != b && b == c || a == c && b != c){
        if(a == b && b != c){
            cout << a << endl;
            return 0;
        }
        else if(a != b && b == c){
            cout << b << endl;
            return 0;
        }
        else if(a == c && b != c){
            cout << a << endl;
            return 0;
        }
    }
    else if(a != b && a != c && b != c){
        div1 = b % a;
        div2 = c % a;
        if(div1 == 0 && div2 == 0){
            cout << a << endl;
        }
        else if(div1 == 0 && div2 != 0 || div1 != 0 && div2 == 0 || div1 != 0 && div2 != 0){
            div1 = a % b;
            div2 = c % b;
            if(div1 == 0 && div2 == 0){
                cout << b << endl;
            }
            else if(div1 == 0 && div2 != 0 || div1 != 0 && div2 == 0 || div1 != 0 && div2 != 0){
                div1 = a % c;
                div2 = b % c;
                if(div1 == 0 && div2 == 0){
                    cout << c << endl;
                }
                else if(div1 == 0 && div2 != 0 || div1 != 0 && div2 == 0 || div1 != 0 && div2 != 0){
                    cout << "-1" << endl;
                }
            }
        }
    }
}