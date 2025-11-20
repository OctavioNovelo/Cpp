/* Link: https://omegaup.com/course/Seleccion_YUC2023/assignment/Caracteres_Tarea#problems/Idioma-P */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string texto;
    cout << "Ingresa el texto a traducir: ";
    getline(cin, texto); // Leer una línea completa de texto

    // Iterar por cada letra del texto
    for (int i = 0; i < texto.length(); i++) {
        // Si es una vocal, duplicar y agregar una 'p' en medio
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u') {
            cout << texto[i] << 'p' << texto[i];
        } else {
            // De lo contrario, simplemente imprimir la letra
            cout << texto[i];
        }
    }

    cout << endl;
    return 0;
}
