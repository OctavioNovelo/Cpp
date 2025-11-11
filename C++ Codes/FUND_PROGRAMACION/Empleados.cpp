#include <iostream>
#include <vector>

using namespace std;

int n = 0; // Vendedores
int p = 0; // Productos
int u = 0; // Unidades
int total = 0; // Total de ventas

// Hay que hacerlos punteros
vector<int> vendedores;
vector<string> productos;
vector<int> unidades;
vector<vector<int>> tabla;

void informacion() //Recoleccion de informacion
{
    cout << "Cuantos vendedores hay ?\n";
    cin >> n;
    cout << "Cuantos productos hay ?\n";
    cin >> p;
    
    vendedores.resize(n);
    productos.resize(p);
    unidades.resize(p);
    tabla.assign(n, vector<int>(p, 0));
}

void tablas() //Hacer las tablas
{
    for (int i = 0; i < n; i++) //Empleados
    {
        cout << "Ingresa los nombres de cada empleado: \n";
        cin >> vendedores[i];
    }

    for (int j = 0; j < p; j++) //Productos
    {
        cout << "Ingresa los prodcutos: \n";
        cin >> productos[j];
        cout << "Cuatas unidades de " << productos[j] << "existen ?\n";
        cin >> unidades[j];
    }

    for (int i = 0; i < n; i++) //Ventas de los vendedores
    {
        for (int j = 0; j < p; j++)
        {
            cout << "Cuantas unidades de " << productos[j] << " vendio " << vendedores[i] << "\n";
            cin >> tabla[j][i];
        }
    }
}

void analisis()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << vendedores[i] << "vendio lo siguiente: \n";
            cout << productos[j] << ": " << tabla[i][j] << "\n";
            total += tabla[i][j];
        }
        cout << "Total de venta: " << total;
        total = 0;
    }
}

 int main ()
 {
    informacion();
    tablas();
    analisis();
 }