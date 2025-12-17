#include <bits/stdc++.h>
using namespace std;

int lista_enlazada[10002];

void init(int N) {
    for (int i = 0; i <= N; i++)
        lista_enlazada[i] = -1;
    return;
}

void conectar(int x, int y) {
    lista_enlazada[x] = y;
    return;
}

void eliminar_siguiente(int x) {
    int y = lista_enlazada[x];
    lista_enlazada[x] = lista_enlazada[y];
    lista_enlazada[y] = -1;
    return;
}

int siguiente(int x) {
    return lista_enlazada[x];
}

int tam_lista(int x) {
    int tam = 1;
    while (lista_enlazada[x] != -1) {
        x = lista_enlazada[x];
        tam++;
    }
    return tam;
}

int N, M, operacion, u, v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> N >> M;
    init(N);

    for (int i = 0; i < M; i++) {
        cin >> operacion >> u;
        if (operacion == 1) {
            cin >> v;
            conectar(u, v);
        } else if (operacion == 2) {
            eliminar_siguiente(u);
        } else if(operacion == 3) {
            cout << tam_lista(u)-1 << '\n';
        } else {
            cout << siguiente(u) << '\n';
        }
    }

    return 0;
}