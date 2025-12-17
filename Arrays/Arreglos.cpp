#include <iostream>

using namespace std;

int main(){

    long long size;
    cin >> size;

    long long doble[size];

    for(int count = 0; count < size; count++){
        cin >> doble[count];
    }
    for(int count = 0; count < size; count++){
        cout << doble[count] << " ";
        count = count + 1;
    }
    cout << '\n';
    for(int count = 1; count < size; count++){
        cout << doble[count] << " ";
        count = count + 1;
    }
    cout << endl;
}