#include <iostream>

using namespace std;

long long N;
long long Op;

int main(){

    cin >> N;

    if(N % 2 == 0){
        Op = N / 2;
        cout << Op << " " << "1\n";
        return 0;
    }
    else if(N % 3 == 0){
        Op = N - 1;
        cout << Op << " " << "1\n";
        return 0;
    }
    else if(N >= 100 && N <= 1000){
        Op = N / 100;
        cout << Op << " " << "1\n";
        return 0;
    }
    else if(N >= 10 && N <=99){
        Op = N / 10;
        cout << Op << " " << "1\n";
        return 0;
    }
    else{
        Op = N + 1;
        cout << Op << " " << "1\n";
        return 0;
        }
    

}