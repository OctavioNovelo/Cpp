/* Link: https://omegaup.com/course/PreEstatal_OMI_YUC/assignment/Ciclos_Tarea#problems/CursoOMIYucT13 */
#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n;

    cin >> n;

    long long a = 0;
    long long b = 1;
    long long c;

    for(long long i = 0; i < n - 1; i++){
        c = a + b;
        a = b;
        b = c;
    }
    cout << a << endl;

    return 0;
}