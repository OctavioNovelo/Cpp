#include <bits/stdc++.h>

using namespace std; 

struct node{
    int val;
    node *next; // Acá debes poner node, porque el puntero va a marcar a un valor de tipo node también
  	node() : val(0), next(nullptr) {}
    node(int x) : val(x), next(nullptr) {}
    node(int x, node *n) : val(x), next(n) {}
    
};

int main(){

  	// Normalmente en una linked list tienes que guardar la cabeza de la lista, es decir
  	// un apuntador al primer elemento de la linked list para que tengas todo el objeto
  	node* head;  // Ese apuntador a la cabeza suele llamarse main o head. Como tu función principal se llama main, lo llamaré head ok? 
    node* current;  // Ahora, este lo llamaré current porque cada que trabajemos con la linked list, se le va a editar a este valor
    //node previous; // Y si por casualidad necesitas guardar el valor previo, este servirá, pero ahora mismo no lo necesitamos 
    
    int n; // Vamos a hacer de que necesitas hacer una linked list con n elementos que tengan sus valores del 1 al n.

    cin >> n;  // Recibes el n
    
  	head = new node(0);  // no entiendo muy bien aca, dice que el la cabeza sera el nodo0, no ? // Exactamente. Será un nodo cuyo valor será el 0
    current = head; // Aquí como voy a manipular el nodo head antes que cualquier otro, necesito guardarlo para luego utiilizarlo. // Es como una variable que guarda un valor de una parte de una arreglo para luego ponerlo en otro lugar del arreglo no ? 
  	for(int i = 1; i < n; i++){
    		node* next = new node(i); 
        current->next; 
        current = next;
	  } // Intenta replicar a mano lo que hace tu código para que puedas entenderlo.
    // Parte esencial de encontrar errores o entender cosas es hacer las cosas a mano para que puedas hacerlas tú después
    // Haz este loop con n = 3 y dime si lo entendiste. //oka oka
    return 0;
}

// ??
// Eso es todo, creo
// Osea, este codigo me creara n contenedores con n valores no ? // Te creará una linked list con n nodos y cada uno con un valor de 0 al n-1 todos consecutivos