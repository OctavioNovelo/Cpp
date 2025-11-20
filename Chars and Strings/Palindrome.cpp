/* Link: https://omegaup.com/course/Seleccion_YUC2023/assignment/Caracteres#problems */

#include <iostream>

using namespace std;

string term;
string assesment;
string palindrome;

int main () {

    cin >> term;

    string palindrome = term;

    int size = term.length();

    for (int i = size - 1; i >= 0; i--)
    {
        palindrome[size-i-1] = term[i]; 
    }

    if (palindrome == term){
        cout << "Si" << '\n';   
    }
    else{
        cout << "No" << '\n';
    }
}