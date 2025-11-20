#include <iostream>

using namespace std;

string term;
string assesment;
string palindrome;

int main () {

    cout << "Escribe la palabra: " << '\n';

    cin >> term;

    string palindrome = term;

    int size = term.length();

    for (int i = size - 1; i >= 0; i--)
    {
        palindrome[size-i-1] = term[i]; /* Se le asigna los indices correspondientes al tamano de la
        palabra introducida al array palindromo, a este valor se le resta el tamano - 1 y - 1, osea
        2 y a esto le incluyen el valor del array palabnra que tiene un valor propio de tamano - 1, y como se 
        encunetra en un ciclo for, cada vez sea verdeadero, se le resta dos (tamano - i - 1)al tamano
         y 1 al contador i, y se repite el proceso hasta que i sea < 0. Todo esto esto se guarda
         en la variable palindromo*/
    }

    cout << palindrome << '\n'; //Imprime la palabra ingresada al revez

    if (palindrome == term){
        cout << "Si" << '\n';   
    }
    else{
        cout << "No" << '\n';
    }
}
