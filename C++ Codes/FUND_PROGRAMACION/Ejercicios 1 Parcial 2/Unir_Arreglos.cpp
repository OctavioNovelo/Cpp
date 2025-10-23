/* Unir dos arreglos*/

/*XD*/
#include <iostream>

using namespace std;

int main (){

    int arr[20];
    int cont = 1;

    for (int i = 0; i < 20; i++){
        cout << "Key the values for the array " << cont << ": ";
        cin >> arr[i];
        if (i == 9){
            cont += 1;
        }
    }


    for (int i = 0; i < 20; i++){
        cout << arr[i] << ", ";
    }
    
}