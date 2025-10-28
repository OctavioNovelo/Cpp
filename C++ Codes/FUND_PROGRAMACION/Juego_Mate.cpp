/* Juego de operaciones matemáticas básicas */
/* Genera operaciones al azar entre 1 y 20 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;


//----- COLORES -----
#define RED      "\x1B[31m"
#define GREEN    "\x1B[32m"
#define YELLOW   "\x1B[33m"
#define BLUE     "\x1B[34m"
#define CYAN     "\x1B[36m"
#define RESET    "\x1B[0m"

int turno = 0;
int n;
vector<int> puntos;
vector<string> nombres;

// Genera un número aleatorio del 1 al 20
int randomNum()
{
    return rand() % 20 + 1;
}

// Calcula el resultado de una operación
int operacion(int a, int b, int tipo)
{
    switch (tipo)
    {
        case 0: 
            return a + b;
        case 1: 
            return a - b;
        case 2: 
            return a * b;
        case 3: 
            return (b != 0) ? a / b : 0;
        default: 
            return 0;
    }
}

// Muestra los puntajes
void mostrarPuntaje()
{
    //Casi nunca uso bool, quiero probar
    bool todosBien = true;
    bool todosMal = true;

    cout << CYAN << "\n--- Puntaje ---\n" << RESET;
    for ( int i = 0; i < n; i++)
    {
        cout << nombres[i] << ": " << puntos[i] << " pts\n";
    }
}

// Turnos
void jugarTurno(int jugador)
{
    int num1 = randomNum();
    int num2 = randomNum();
    int tipo = rand() % 4; 
    char simbolo;

    switch (tipo)
    {
        case 0: 
            simbolo = '+'; 
            break;
        case 1: 
            simbolo = '-';
            break;
        case 2: 
            simbolo = '*'; 
            break;
        case 3: 
            simbolo = '/';
            break;
    }

    cout << BLUE << nombres[jugador] << ", resuelve: " << RESET;
    cout << num1 << " " << simbolo << " " << num2 << " = ";

    int respuestaJugador;
    cin >> respuestaJugador;

    int resultadoReal = operacion(num1, num2, tipo);

    if (respuestaJugador == resultadoReal)
    {
        cout << GREEN << "Correcto\n" << RESET;
        puntos[jugador] += 10;
    }
    else
    {
        cout << RED << "Incorrecto. La respuesta correcta era " << resultadoReal << "\n" << RESET;
        puntos[jugador] -= 20;
    }
}


// Comprobar puntos
bool finDelJuego() {
    for (int i = 0; i < n; i++) {
        if (puntos[i] <= 0) {
            cout << YELLOW << "--- Fin del juego ---\n" << RESET;
            int ganador = 0;
            for (int j = 1; j < n; j++) {
                if (puntos[j] > puntos[ganador]) ganador = j;
            }
            cout << GREEN << nombres[ganador]
                 << " gana la partida con "
                 << puntos[ganador] << " puntos\n" << RESET;
            return true;
        }
    }
    return false;
}


int main()
{
    srand(time(0));

    cout << CYAN << "--- Bienvenidos al juego. ---\n" << RESET;

    cout << "Cuantos van a jugar ?\n";
    cin >> n;
    cin.ignore();

    nombres.resize(n);
    puntos.resize(n, 100);

    for (int i = 0; i < n; i++)
    {
        cout << "Nombre del Jugador " << i + 1 << ": ";
        getline(cin, nombres[i]);
    }

    while (true)
    {
        cout << YELLOW << "--- Turno " << (turno + 1) << " ---\n" << RESET;

        for (int i = 0; i < n; i++)
        {
            jugarTurno(i);
        }

        mostrarPuntaje();

        if (finDelJuego())
            break;

        turno++;
    }

    cout << CYAN << "Gracias por jugar\n" << RESET;
    return 0;
}
