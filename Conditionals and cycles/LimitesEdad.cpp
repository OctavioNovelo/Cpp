/* Link: https://omegaup.com/course/PreEstatal_OMI_YUC/assignment/Ciclos_Tarea#problems/CursoOMIYucT11 */

#include <bits/stdc++.h>

using namespace std;

int main(){

ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

long long n, a, b, count = 0;

cin >> n >> a >> b;

long long age[n];

for(int i = 0; i < n; i++){
    cin >> age[i];
}

int i = 0;
while(i < n){
    if(age[i] >= a && age[i] <= b){
        count++;
    }
    i++;
}

cout << count << endl;
return 0;

} 