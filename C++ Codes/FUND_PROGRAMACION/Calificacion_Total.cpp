#include <iostream>

using namespace std;

int a = 0, b = 0, c = 0;
void calificacion()
{
    cout << "Ingresa tus calificaciones: \n";
    cin >> a >> b >> c;
    cout << "La calificacion total es: " << a + b + c << endl;
}
int main ()
{
    calificacion();
}