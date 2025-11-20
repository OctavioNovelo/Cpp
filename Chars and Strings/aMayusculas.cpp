#include <iostream>
#include <cstring>
#include <cctype>
// xd
using namespace std;

//Variables
std::string lower,upper, useless;

bool foundTrash;

int main()
{
    std::getline(std::cin, lower); //Se le asigna una valor string a la variable lower

    upper = lower; // La variable lower se le asigna a la variable upper
    useless = "1234567890 "; // La variable useless se le asignan los numeros y espacios

    for (int i=0; i<lower.length(); i++){ /* Se crea la variable i y se le asigna el valor 0. 
    Mientras la variable i se menor a la longitud de la variable lower (osea que de verdadero) */

        foundTrash = useless.find(upper[i]); /* Si la condicional del "for" es verdadera se le 
        asigna a la variable "foundTrash" la accion de la busqueda de los varoles que se encuentran
        en dentro de la variable useless */

        if (foundTrash != string::npos){ /*string::npos buscara en toda la linea de la varaible upper. */
            upper[i] = toupper(upper[i]); /* Si el resultado de la variable de foundTrash es distinta al
             de la string::npos la funcion toupper hara que los caracteres de la variable upper pasen
             minusculas a mayusculas */
        }
        else{
            upper[i] = lower[i]; /* Si no se mantine igual */
        }

        /* Se le suma 1 a la vairable i*/
    }`
    /* Y se repite el procesos por el For hasta que i sea = a la longitud de la variable lower */

    cout<<upper;
    return 0;
}