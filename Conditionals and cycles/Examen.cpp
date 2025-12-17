#include <iostream>

using namespace std;

int C1;
int C2;
int CF;

int main()
{
    cin >> C1;
    cin >> C2;
    
    if(C1 >= 70 && C2 >= 70){
        cout << "Aprobado";
    }
    else if(C1 < 70 && C2 < 70){
        long long A1 = C1 + 3;
        long long B2 = C2 + 3;
        CF = A1 + B2;
        
        if(CF >= 140){
            cout << "Aprobado";
        }
        else{
            cout << "No aprobado";
        }
    }
    else if(C1 < 70 && C2 >= 70 || C1 >= 70 && C2 < 70){
        int CP = C1 + C2;
        if(CP >= 140){
            cout << "Aprobado";
        }
        else{
            cout << "No aprobado";
        }
    }
}