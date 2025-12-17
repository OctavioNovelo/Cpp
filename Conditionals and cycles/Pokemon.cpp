/* Link: https://omegaup.com/course/PreEstatal_OMI_YUC/assignment/Ciclos_Tarea#problems/CursoOMIYucT15 */
#include <iostream>

const int MAX_POKEMONS = 100000;

int poke_count[MAX_POKEMONS + 1];
int poke_seen[MAX_POKEMONS];

int main() {
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cin >> poke_seen[i];
        poke_count[poke_seen[i]]++;
    }
    
    int max_count = 0, max_poke = 0;
    
    for (int i = 1; i <= MAX_POKEMONS; i++) {
        if (poke_count[i] > max_count) {
            max_count = poke_count[i];
            max_poke = i;
        }
    }
    
    std::cout << max_poke;
    
    return 0;
}