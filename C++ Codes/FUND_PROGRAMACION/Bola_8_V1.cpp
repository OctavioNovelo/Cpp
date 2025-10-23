/* Realizar un programa con el ciclo while que simule el juego de Bola 8. */
/* Esta version de la bola 8 se usara ctime y rand()*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

string ball[20] = {"Las perspectivas nos son muy buenas","Es cierto", "Decididamente si", "Perspectiva Buena", "Si, definitvamente", "Puedes confiar en ello", "Como yo lo veo, si", 
    "Lo mas probable", "Si", "Las señales apuntan a que si", "No cuentes con ello", "Mejor no decirte ahora", "Vuelve a preguntar mas tarde",
    "No se puede predecir ahora", "Concentrate y vuelve a preguntar", "Sin lugar a dudas", "Mi respuesta es no", "Mis fuentes dicen que no", 
    "No cuentes con ello", "Muy dudoso"};
string pregunta;

int main ()
{
    while (true)
    {
        cout << "Ask the ball: \n";
        getline(cin, pregunta);
        srand(time(0));
        int num = rand() % 20; //
        cout << ball[num] << ". " << "\n";
    }
}