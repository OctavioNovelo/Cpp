/* Link: https://omegaup.com/course/PreEstatal_OMI_YUC/assignment/Ciclos_Tarea#problems/CursoOMIYucT14 */
#include <iostream>

using namespace std;

int main(){

    long long n, count = 0;

    cin >> n;

    long long numbers[n];

    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    for(int i = 0; i < n-1; i++){ 
        if(numbers[i + 1] >= numbers[i]){
            count++;
        }
    }
    
    if(count == n - 1){
        cout << "Si" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
