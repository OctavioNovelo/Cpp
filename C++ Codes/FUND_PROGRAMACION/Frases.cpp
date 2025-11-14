#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

string frase;
char caracter;
string words;
string sub;

void leer()
{
    cout << "Ingrese la frase: \n";
    getline(cin, frase);
    cout << endl;
    cout << "Que caracter quiere buscar ?\n";
    cin >> caracter;
    cout << endl;
    cout << "Que palabra quieres buscar ?\n";
    cin >> words;
    cout << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Ingrese su subfrase: \n";
    getline(cin, sub);
    cout << endl;
}

void leer_Caracter()
{
    int total = 0;
    for (int i = 0; i < frase.length(); i++)
    {
        if (caracter == frase[i])
        {
            total += 1;
        }
    }
    cout << "La frase repite el caracter '" << caracter << "' un total de " << total << " veces.\n";
}

void buscar_Palabra()
{
    int n = frase.length();
    int m = words.length();
    bool encontrado = false;

    for (int i = 0; i <= n - m; i++)
    {
        bool igual = true;

        for (int j = 0; j < m; j++)
        {
            if (frase[i + j] != words[j])
            {
                igual = false;
                break;
            }
        }

        if (igual)
        {
            cout << "La palabra '" << words << "' se encontro en la posicion " << i << ".\n";
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
        cout << "La palabra '" << words << "' NO se encontro.\n";
}

void buscar_Subfrase()
{
    int n = frase.length();
    int m = sub.length();
    bool encontrado = false;

    for (int i = 0; i <= n - m; i++)
    {
        bool igual = true;

        for (int j = 0; j < m; j++)
        {
            if (frase[i + j] != sub[j])
            {
                igual = false;
                break;
            }
        }

        if (igual)
        {
            cout << "La subfrase \"" << sub << "\" se encontro en la posicion " << i << ".\n";
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
        cout << "La subfrase \"" << sub << "\" NO se encontro.\n";
}


int main ()
{
    leer();
    leer_Caracter();
    buscar_Palabra();
    buscar_Subfrase();
}