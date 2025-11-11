#include <iostream>

using namespace std;

int a = 4;
int b = 4;
int **matriz = new int*[a];

int mayor = 0;
int menor = 0;

void Guardar_datos()
{
    for (int i = 0; i < a; i++)
    {
        matriz[i] = new int[b];
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            matriz[i][j] = (rand() % 100);
        }
    }
}

void Mostrar_datos()
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void Mostrar_Mayor()
{
    mayor = matriz[0][0];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (mayor > matriz[i][j])
            {
                mayor = matriz[i][j];
            }
        }
    }
    cout << mayor << endl;
}

void Mostrar_Menor()
{
    menor = matriz[0][0];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (menor < matriz[i][j])
            {
                menor = matriz[i][j];
            }
        }
    }
    cout << menor << endl;
}
int main()
{
    srand(time(0));
    Guardar_datos();
    Mostrar_datos();
    Mostrar_Mayor();
    Mostrar_Menor();
}