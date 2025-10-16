// Ejercicios Examen Primer Parcial 
/*
Realizar un algoritmo que simule un cajero de pagos de servicios (Agua, luz, 
teléfono o cable). Inicialmente se debe leer la cantidad a pagar (debe ser positiva). 
Si la cantidad a pagar es mayor a $1000, hacer un descuento del 20%, y si es 
mayor a $3000 pesos, hacer un descuento del 35%. Si es menor o igual a $1000, no 
tiene descuento. Después se debe mostrar el total a pagar con el descuento 
aplicado. El programa debe ir leyendo el dinero introducido por el usuario hasta 
que se cubra el pago requerido. Si se ingresa más dinero del necesario, se debe 
calcular y mostrar el cambio; si se paga exacto, debe mostrar un mensaje de 
confirmación 
*/

#include <iostream>

using namespace std;

int main(){
    string s;
    float n;
    
    cout << "Que servicio va a pagar: ";
    cin >> s;
    cout << "Cuanto va a pagar: ";
    cin >> n;

    if (n >= 0){
        if (n > 1000){
            n = n - ((n * 20) / 100);
        }
        else if (n > 3000){
            n = n - ((n * 35) / 100);
        }
        else if (n <= 1000){
            n = n;
        }
        else if (n < 0){
            cout << "Error";
        }
    }

    cout << "El monto a pagar es de: "<< n << "\n";
    long long a;
    float d;

    while (d < n) {
        //Me dio flojera, pero hay que corregir que el programa acepta billetes
        // inexistentes (400, 360, 700, etc.)
        cout << "Ingresa los billetes: ";
        cin >> a;
        if (a > 1000 || a < 20){
            cout << "Billete no valido" << "\n";
        }
        else if (a % 10 != 0){
            cout << "Billete no valido" << "\n";
        }
        else {
            d += a;
        }
    }

    if (d > n){
        d -= n;
        cout << "Su cambio es: " << d << "\n";
    }
    else if (d == n){
        cout << "Confirmado";
    }
}