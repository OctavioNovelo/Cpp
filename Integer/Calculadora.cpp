#include <iostream>
#include <math.h>
#include <stdlib.h>
//abs (valor absoluto), sqrt (raiz cuadrada), log (lagoritmo natural)

using namespace std;

int main(){

    long long Num1;
    long long Num2;
    char Op;
    double Resulatdo;

    cout << "Ingrese la operacion de dos digitos: " << "\n";
    cin >> Num1 >> Op >> Num2;

    if (Num1 == 0 || Num2 == 0)
    {
        cout << "Error";
    }
    else if(Op == '+'){
        
        Resulatdo = Num1 + Num2;
        cout << Resulatdo;
        return 0;
    }
    else if (Op == '-')
    {
        Resulatdo = Num1 - Num2;
        cout << Resulatdo;
        return 0;
    }
    else if (Op == '*')
    {
        Resulatdo = Num1 * Num2;
        cout << Resulatdo;
        return 0;
    }
    else if (Op == '/')
    {
        Resulatdo = Num1 / Num2;
        cout << Resulatdo;
        return 0;
    }
    else if (Num1 < 0)
    {
        Resulatdo = abs(Num1);
        cout << Resulatdo;
    }
    else if(Num2 < 0){

        Resulatdo = abs(Num2);
        cout << Resulatdo;
    }
    else if (Op == '^')
    {
        if (Num1 > 0 && Num2 == 0)
        {
            Resulatdo = sqrt(Num1);
            cout << Resulatdo;
        }
        else if(Num1 == 0 && Num2 > 0){

            Resulatdo = sqrt(Num2);
            cout << Resulatdo;
        }
    }
    else{
        cout << "Errorw";
    }
    
    return 0;
    
    

}