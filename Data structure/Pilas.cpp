#include <iostream>

using namespace std;

int main() {
    int dato1;
    int dato2;

    cout << "Valor del primer nodo: " << endl;
    cin >> dato1;
    cout << "Valor del segundo nodo: " << endl;
    cin >> dato2;
    
    int* nodo1 = new int;
    *nodo1 = dato1;
    int* nodo2 = new int;
    *nodo2 = dato2;

    int* siguienteNodo1 = nodo2;

    // Acceder a los datos de los nodos
    cout << "Dato del primer nodo: " << *nodo1 << endl;
    cout << "Dato del segundo nodo: " << *nodo2 << endl;

    // Liberar memoria
    delete nodo1;
    delete nodo2;

    return 0;
}
