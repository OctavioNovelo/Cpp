/* Link: https://omegaup.com/course/Seleccion_YUC2023/assignment/Caracteres#problems */

#include <bits/stdc++.h>    

int main()
{
    std::string word;
    
    std::cin >> word;
    
    std::reverse(word.begin(), word.end());
    
    std::cout << word << std::endl;
    
    return 0;
}