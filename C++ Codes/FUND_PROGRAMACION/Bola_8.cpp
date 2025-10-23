/* Realizar un programa con el ciclo while que simule el juego de Bola 8. */
/* Esta version de la bola 8 la hice sin averiguar nada ni usar librerias;
el sistema usa el tamaño de la pregunta para definir que respuesta dar, es una aleatorieadad disfrazada.*/
#include <iostream>


using namespace std;


string ball[20] = {"Las perspectivas nos son muy buenas","Es cierto", "Decididamente si", "Perspectiva Buena", "Si, definitvamente", "Puedes confiar en ello", "Como yo lo veo, si", 
    "Lo mas probable", "Si", "Las señales apuntan a que si", "No cuentes con ello", "Mejor no decirte ahora", "Vuelve a preguntar mas tarde",
    "No se puede predecir ahora", "Concentrate y vuelve a preguntar", "Sin lugar a dudas", "Mi respuesta es no", "Mis fuentes dicen que no", 
    "No cuentes con ello", "Muy dudoso"};
string respuesta;
string copia = "no";
string pregunta;
int count = 0;

//La funcion lee la pregunta con todo y espacios usando getline.
//La variable "copia" guarda una copia de la pregunta, despues de hacer las comparaciones.
//Si la copia es igual a la pregunta, la bola no volvera a responder.
void preguntas(string &pregunta) // &pregunta se recibe como referencia para poder obtener el tamaño correcto cuando se usa .length();
{
    cout << "What do you want ?\n";
    getline(cin, pregunta);
    if (copia == pregunta)
    {
        cout << "The ball has been talk...\n";
        count = 1;
    }
    else
    {
        count = 0;
    }
    copia = pregunta;
}

//Se utiliza la variable size para recorrer las posibles frases de la bola 8
//La verdad siento que hice un relajo con lo de la j, pero lo use para poder reiniciar el contador a 0 por si la pregunta es
// de mas de 20 palabras caracteres.
void random(int size)
{
    for (int i = 0, j = 0; i < size; i++, j++)
    {
        j = i % 20;
        respuesta = ball[j];
    }
    if (count == 0) //Si la bola respondio exactamente la misma pregunta anteriormente no responde de nuevo. 
    {
        cout << respuesta << "." << "\n";
    }
}

int main ()
{
    while (true)
    {
        preguntas(pregunta);
        int size = pregunta.length();
        random(size);
    }
}