#include <iostream>
using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n >> k;

    int numbers[n];
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    int i = 0;
    while (i < n) {
        if (numbers[i] < k) {
            count++;
        }
        i++;
    }

    cout << count << endl;
    return 0;
}
 