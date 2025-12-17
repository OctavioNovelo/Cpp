//Roto Link: https://omegaup.com/course/Seleccion_YUC2023/assignment/Estructuras1_Tarea?fromLogin=#problems/roto

#include <bits/stdc++.h>

using namespace std;

long long cola[2000001], inicio = 1e5, fin = 1e5;

void push_back(long long x){
    cola[fin++] = x;
    return;
}   

void push_front(long long x){
    inicio--;
    cola[inicio] = x;
    // cola[--inicio] = x;
    // Es lo mismo pero raro;
    return;
}

void pop_back(){
    fin--;
    cola[fin] = 0;
    return;
}

void pop_front(){
    inicio++;
    cola[inicio] = 0;
    return;
}

int bac(){
    return cola[fin - 1];
}

int front(){
    return cola[inicio];
}

int size(){
    return fin - inicio;
}

int main(){

    return 0;
}