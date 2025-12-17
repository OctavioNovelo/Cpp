#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrices[n][m][m];
    int even_matrices[n][m][m], odd_matrices[n][m][m];
    int even_count = 0, odd_count = 0;

    // Leer las matrices
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < m; k++) {
                cin >> matrices[i][j][k];
            }
        }
        
        int first_element = matrices[i][0][0];
        
        // Clasificar las matrices en pares e impares
        if (first_element % 2 == 0) {
            for (int j = 0; j < m; j++) {
                for (int k = 0; k < m; k++) {
                    even_matrices[even_count][j][k] = matrices[i][j][k];
                }
            }
            even_count++;
        } else {
            for (int j = 0; j < m; j++) {
                for (int k = 0; k < m; k++) {
                    odd_matrices[odd_count][j][k] = matrices[i][j][k];
                }
            }
            odd_count++;
        }
    }

    // Imprimir las matrices pares e impares en el orden correcto
    for (int i = 0; i < even_count; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < m; k++) {
                cout << even_matrices[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < odd_count; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < m; k++) {
                cout << odd_matrices[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}

