/* Link: https://omegaup.com/course/Seleccion_YUC2023/assignment/Caracteres#problems */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    
    cin >> word;
    
    long long letters = word.length();
    
    for(int i = 0; i < letters; i++){
        
        if(word[i] == '0'){
            word[i] = ' ';
        }
        else if(word[i] == '1'){
            word[i] = '\n';
        }
        else if(word[i] == '2'){
            word[i] = '\\';
        }
        
        cout << word[i];
    }
    
    return 0;
}