/* Link: https://omegaup.com/course/PreEstatal_OMI_YUC/assignment/Ciclos_Tarea#problems/CursoOMIYucT12 */
#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n, div = 1;

    cin >> n;

    int count = 0;

    while(count < n){
        if(n % div == 0){
            cout << div << "\n";
        }
        div++;
        count++;
    }

    return 0;
}