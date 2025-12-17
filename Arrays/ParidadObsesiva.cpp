/* Link: https://omegaup.com/course/PreEstatal_OMI_YUC/assignment/Arreglos_Leccion#problems */
#include <iostream> 

using namespace std;

int main() {

    // Lee la cantidad de números
    int n;
    cin >> n;

    // Lee los números
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Separa los números en dos arreglos (pares e impares)
    int pares[n], impares[n];
    int num_pares = 0, num_impares = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            pares[num_pares] = nums[i];
            num_pares++;
        } else {
            impares[num_impares] = nums[i];
            num_impares++;
        }
    }

    // Imprime los números pares
    for (int i = 0; i < num_pares; i++) {
        cout << pares[i] << " ";
    }
    cout << endl;

    // Imprime los números impares
    for (int i = 0; i < num_impares; i++) {
        cout << impares[i] << " ";
    }
    cout << endl;

    return 0;
}
