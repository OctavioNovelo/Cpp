#include <bits/stdc++.h>

using namespace std;

int main(){

    long long casos; //t
    long long count = 0;
    cin >> casos;

    while(casos--){
        long long cantidad;//n
        cin >> cantidad;
        long long dulces[cantidad];//Ai

        for(int i = 0; i < cantidad; i++){
            dulces[i];
        }

        for(int i = 0; i < cantidad; i++){
            for(int e = cantidad - 1; e > 0; e--){
                if(dulces[i] != dulces[e]){
                    continue;
                }
                else if(dulces[i] == dulces[e]){
                    count++;
                    continue;
                }
            }
        }
        cout << count << endl;
    }

}