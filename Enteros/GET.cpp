#include <iostream> 

using namespace std;

int main(){

    float geb;
    float excercise;
    float ten;
    float result;
    float result2;
    float result3;

    cout << "GEB: " << endl;
    cin >> geb;
    cout << "Excercise: " << endl;
    cin >> excercise;

    excercise = excercise / 100;
    ten = geb / 10;

    result = geb + ten;

    result2 = geb * excercise;

    result3 = result + result2;

    cout << "GET: " << result3 << '\n';

    return 0;

}