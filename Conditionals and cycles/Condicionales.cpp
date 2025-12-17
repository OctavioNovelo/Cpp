#include <iostream>
using namespace std;
/* Operadores relacionales
< Mayor que
> Mayor que
== Igual que 
!= Diferencia de
<= MEnor o igual que
>= Mayor o igual que 
*/

/* Operadores logicos
! (not) [Unario]
    !true = false
    !false = true

Binarios
|| (or)
a(falso) || b(verdadero) = verdadero 
a(verdadero) || b(falso) = verdadero
a(falso) || b(falso) = Falso 
a(verdadero) || b (verdero) = Verdadero

&& (and)
a(verdadero) || b(falso) = falso 
a(verdadero) || b(verdadero) = falso
a(falso) || b(verdadero) = falso 
a(verdadero) || b(verdadero) = verdadero
*/
int a;
int b;

int main(){
cin >> a;
cin >> b;

// if(<valor booleano>)
if(a < b){
    cout << "menor";
} else if(a == b) {
    cout << "mayor";   
}
else { 
    cout << "mayor";
}

}
