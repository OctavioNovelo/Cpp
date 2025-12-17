#include <iostream>

using namespace std;

int main(){

    long long year;

    cin >> year;

    if(year % 4 == 0 && year % 100 != 0){
        cout << "Si" << endl;
        return 0;
    }
    else if(year % 4 == 0 && year % 100 != 0){
        cout << "Si" << endl;
        return 0;
    }
    else if(year % 4 == 0 && year % 100 == 0 && year % 400 != 0){
        cout << "No" << endl;
        return 0;
    }
    else if(year % 4 != 0 || year % 400 != 0 && year % 100 == 0){
        cout << "No" << endl;
    }
    else if(year % 4 == 0 && year % 100 == 0 && year % 400 == 0){
        cout << "Si" << endl;
    }
    else{
        cout << "No" << endl; 
    }
    return 0;
}