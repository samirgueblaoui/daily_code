#include "bibliotheque.hpp"
#include <iostream>
#include <string>

bool is_prime(int p){
    if(p == 0 || p == 1){
        return false;
    }
    else {
        for (int i = 2; i <= std::sqrt(p); i++){
            if (p % i == 0) {
                return false;
            }
        }
        return true;
    }
}

int chiffre_nombre(long nombre){
    size_t compteur = 0;

    while(nombre > 0){
        nombre /= 10;
        compteur++;
    }

    return compteur;
}