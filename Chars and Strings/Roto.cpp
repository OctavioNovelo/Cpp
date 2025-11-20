#include <bits/stdc++.h>

using namespace std;

deque<char> characters;

int main() {
    string input;
    getline(cin, input);

    for (char c : input) {
        if (c == '[') {
            characters.push_front(c);
        } else if (c == ']') {
            characters.push_back(c);
        }
    }

    for (char c : characters) {
        if (c != '[' && c != ']') {
            cout << c;
        }
        else{
            
        }
    }

    return 0;
}
