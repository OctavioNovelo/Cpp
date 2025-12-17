#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    int n, k;
    int l, r;

    cin >> t;
    
    string result[t];

    for(int e = 0; e < t; e++) {
        cin >> n >> k;

        int test[n][n];

        for(int i = 0; i < n; i++) {
            cin >> l >> r;
            test[i][0] = l;
            test[i][1] = r;
        }

        for(int i = 0; i < n; i++) {
            int final = test[i][1] - k;
            if(final >= 0 && final <= test[i][0]){
                result[e] = "YES";
            }
            else {
                result[e] = "NO";
            }
        }
    }

    for(int i = 0; i < t; i++){
        cout << result[i] << endl;
    }

    return 0;
}
