#include <iostream> 

using namespace std;

int precio = 0;
void iva()
{
    cout << "Cuanto vas a pagar ?\n";
    cin >> precio;
    cout << "El total a pagar es: " << precio + (precio * .19) << " con IVA incluido";
}
int main()
{
    iva();
}