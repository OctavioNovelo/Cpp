/* Link: https://omegaup.com/arena/Algoritmia/#problems/Buscaminas- */
#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int matriz[m][n];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(matriz[i][j] == 1) {
                cout << 9 << " ";
            } else {
                int minas_cercanas = 0;
                for(int a = -1; a <= 1; a++) {
                    for(int b = -1; b <= 1; b++) {
                        int x = i + a;
                        int y = j + b;
                        if(x >= 0 && x < m && y >= 0 && y < n && matriz[x][y] == 1) {
                            minas_cercanas++;
                        }
                    }
                }
                cout << minas_cercanas << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
