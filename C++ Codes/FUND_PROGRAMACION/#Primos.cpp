#include <iostream>

using namespace std;

long long n = 0;

void primo()
{
    int cont = 0;
    cout << "Ingresa el numero:\n";
    cin >> n;
    if (n <= 1){
        cout << "No es un numero primo\n";
    }
    else if (n == 2)
    {
        cout << "Si es numero primo\n";
    }

    for (int i = 2; i < n; i++){
        if(n % i == 0)
        {
            cont++;
        }
    }

    if (cont == 0)
    {
        cout << "Si es un numero primo\n";
    }
    else 
    {
        cout << "No es un numero primo\n";
    }
}
int main(){
    primo();
}