#include <bits/stdc++.h>

using namespace std;

int main(){

    long long ring;
    long long fullring;
    long long enemies;
    long long totalenmemies = 0;

    cin >> ring >> fullring >> enemies;

    long long power[enemies];

    for(int i = 0; i < enemies; i++){
        cin >> power[i];
    }

    for(int i = 0; i < fullring; i++){
        if(power[i] > power[i + 1]){
            totalenmemies += power[i];
        }
        if(power[i] < power[i + 1]){
            totalenmemies += power[i + 1];
        }
        if(power[i] == power[i + 1]){
            totalenmemies += power[i];
            totalenmemies += power[i + 1];
        }
    }

    cout << totalenmemies << endl;

    return 0;

}