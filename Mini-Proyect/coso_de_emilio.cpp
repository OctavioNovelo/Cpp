#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

// --- Global Data ---
const int MAX_NODOS = 100;
double grid[6][6] = {
    {231.5, 224.8, 198.6, 178.5, 157.6, 108.9}, // Fila A
    {238.6, 275.8, 259.1, 216.3, 188.8, 135.5}, // Fila B
    {220.0, 278.8, 338.7, 265.9, 207.8, 181.1}, // Fila C
    {195.3, 229.8, 263.5, 246.3, 218.6, 198.7}, // Fila D
    {145.9, 168.9, 200.0, 210.8, 251.9, 263.4}, // Fila E
    {108.9, 125.8, 163.8, 221.8, 273.4, 297.6}  // Fila F
};

double resultados[MAX_NODOS][3]; // [Indice][0:X, 1:Y, 2:Z]
int totalNodos = 0;

// --- Logic Functions ---

double calcularZ(double x, double y) {
    int x1 = ((int)x / 100) * 100;
    int x2 = x1 + 100;
    if (x1 >= 500) { x1 = 400; x2 = 500; }

    int y1 = ((int)y / 100) * 100;
    int y2 = y1 + 100;
    if (y1 >= 500) { y1 = 400; y2 = 500; }

    int ix1 = x1 / 100, ix2 = x2 / 100;
    int iy1 = y1 / 100, iy2 = y2 / 100;

    double z1 = grid[iy1][ix1] + ((x - x1) / 100.0) * (grid[iy1][ix2] - grid[iy1][ix1]);
    double z2 = grid[iy2][ix1] + ((x - x1) / 100.0) * (grid[iy2][ix2] - grid[iy2][ix1]);
    return z1 + ((y - y1) / 100.0) * (z2 - z1);
}

void exportarResultados() {
    ofstream archivo("resultados.txt");
    if (archivo.is_open()) {
        archivo << "--- RESULTADOS DE TOPOGRAFIA ---" << endl;
        archivo << fixed << setprecision(2);
        archivo << left << setw(10) << "Nodo" << setw(10) << "X" << setw(10) << "Y" << setw(10) << "Z" << endl;
        archivo << "---------------------------------" << endl;
        for (int i = 0; i < totalNodos; i++) {
            archivo << left << setw(10) << i + 1 
                    << setw(10) << resultados[i][0] 
                    << setw(10) << resultados[i][1] 
                    << setw(10) << resultados[i][2] << endl;
        }
        archivo.close();
        cout << "\n[!] Resultados exportados a 'resultados.txt' correctamente." << endl;
    } else {
        cout << "\n[ERROR] No se pudo crear el archivo de resultados." << endl;
    }
}

// --- UI Functions ---

void mostrarMatrizTerreno() {
    cout << "\n--- MATRIZ DE TERRENO (Topografia) ---" << endl;
    cout << "      ";
    for(int i=0; i<6; i++) cout << "Col " << i << "   ";
    cout << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Fila " << i << ": ";
        for (int j = 0; j < 6; j++) {
            cout << fixed << setprecision(1) << setw(7) << grid[i][j] << " ";
        }
        cout << endl;
    }
}

void mostrarResultadosActuales() {
    cout << "\n--- NODOS CALCULADOS ---" << endl;
    if (totalNodos == 0) {
        cout << "[Vacio]" << endl;
    } else {
        cout << left << setw(6) << "ID" << setw(10) << "X" << setw(10) << "Y" << setw(10) << "Z" << endl;
        for (int i = 0; i < totalNodos; i++) {
            cout << left << setw(6) << i 
                 << setw(10) << resultados[i][0] 
                 << setw(10) << resultados[i][1] 
                 << setw(10) << resultados[i][2] << endl;
        }
    }
}

bool confirmarSalida() {
    char opt1, opt2;
    cout << "\n[?] Desea salir? (s/n): ";
    cin >> opt1;
    if (opt1 == 's' || opt1 == 'S') {
        cout << "[!!] ATENCION: Perdera los cambios no guardados. Realmente desea salir? (s/n): ";
        cin >> opt2;
        return (opt2 == 's' || opt2 == 'S');
    }
    return false;
}

void seccionTopografia() {
    char opcion;
    bool volver = false;

    while (!volver) {
        // Limpieza basica de consola (funciona en la mayoria de entornos)
        cout << "\033[2J\033[1;1H"; 
        
        mostrarMatrizTerreno();
        mostrarResultadosActuales();

        cout << "\n--- OPCIONES DE CALCULOS ---" << endl;
        cout << "1. Agregar Nodo" << endl;
        cout << "2. Borrar Nodo" << endl;
        cout << "3. Guardar y Exportar" << endl;
        cout << "4. Volver al Menu Principal" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        if (opcion == '1') {
            if (totalNodos < MAX_NODOS) {
                double x, y;
                cout << "Ingrese X (0-500): "; cin >> x;
                cout << "Ingrese Y (0-500): "; cin >> y;
                if (x >= 0 && x <= 500 && y >= 0 && y <= 500) {
                    resultados[totalNodos][0] = x;
                    resultados[totalNodos][1] = y;
                    resultados[totalNodos][2] = calcularZ(x, y);
                    totalNodos++;
                } else {
                    cout << "[ERROR] Coordenadas fuera de rango." << endl;
                    cin.ignore(); cin.get();
                }
            } else {
                cout << "[ERROR] Limite de nodos alcanzado." << endl;
                cin.ignore(); cin.get();
            }
        } else if (opcion == '2') {
            int idx;
            cout << "Ingrese ID del nodo a borrar: "; cin >> idx;
            if (idx >= 0 && idx < totalNodos) {
                for (int i = idx; i < totalNodos - 1; i++) {
                    resultados[i][0] = resultados[i+1][0];
                    resultados[i][1] = resultados[i+1][1];
                    resultados[i][2] = resultados[i+1][2];
                }
                totalNodos--;
                cout << "[!] Nodo eliminado." << endl;
            } else {
                cout << "[ERROR] ID invalido." << endl;
            }
            cin.ignore(); cin.get();
        } else if (opcion == '3') {
            exportarResultados();
            cout << "Presione Enter para continuar...";
            cin.ignore(); cin.get();
        } else if (opcion == '4') {
            if (confirmarSalida()) {
                volver = true;
            }
        }
    }
}

int main() {
    int opcionMenu;
    bool terminar = false;

    while (!terminar) {
        cout << "\033[2J\033[1;1H";
        cout << "========================================" << endl;
        cout << "   SISTEMA DE CALCULO TOPOGRAFICO" << endl;
        cout << "========================================" << endl;
        cout << "1. Calcular Topografia" << endl;
        cout << "2. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcionMenu;

        switch (opcionMenu) {
            case 1:
                seccionTopografia();
                break;
            case 2:
                if (confirmarSalida()) {
                    exportarResultados(); // Exportacion automatica al salir
                    terminar = true;
                }
                break;
            default:
                cout << "Opcion no valida." << endl;
                cin.ignore(); cin.get();
        }
    }

    cout << "Saliendo del programa..." << endl;
    return 0;
}