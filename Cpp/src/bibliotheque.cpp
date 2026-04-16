#include "bibliotheque.hpp"
#include <iostream>
#include <string>
#include <cmath>


//Niveau 3
bool is_prime(int p){
    if(p <= 1){
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
    if(nombre == 0){
        return 1;
    }
    long nombre2 = nombre;

    if(nombre2 < 0){
        nombre2 *= -1;
    } 

    while(nombre2 > 0){
        nombre2 /= 10;
        compteur++;
    }

    return compteur;
}

//Niveau 4

double carre_nombre(double x){
    return x*x;
}

double max_nombre(double x, double y){
    double max = x;

    if(max < y){
        max = y;
    }

    return max;
}

bool is_pair(int n){
    return n % 2 == 0;
}

double moyenne_3_nombres(double x1, double x2, double x3){
    return (x1 + x2 + x3)/3.0;
}