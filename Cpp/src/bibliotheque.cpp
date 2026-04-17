#include "bibliotheque.hpp"
#include <cmath>
#include <iostream>
#include <algorithm>


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

//Niveau 5

std::string supp_espace_ponctuation(std::string s){
    std::string s2 = "";
    for(char c : s){
        if(c == ' ' || c == '.' || c == ',' || c == ':' || c == ';' || c == '?' || c == '!'){
            continue;
        }
        s2 += c;
    }
    return s2;
}

bool is_palindrome(std::string s){
    for(int i = 0; i < s.size() / 2; i++){
        if (s[i] != s[s.size() - 1 - i]){
            return false;
        }
    }
    return true;
}

std::string majuscule_to_minuscule(std::string s){
    std::string s2 = "";

    for(char c : s){
        if(c <= 90 && c >= 65){
            c += 32; 
        }
        s2 += c;
    }
    return s2;
}

std::string minuscule_to_mjuscule(std::string s){
    std::string s2 = "";

    for(char c : s){
        if(c <= 122 && c >= 97){
            c -= 32; 
        }
        s2 += c;
    }
    return s2;
}

int nbr_iteration_lettre(std::string s, std::string s2){
    char c = s2[0];
    int compteur = 0;
    for(char x : s){
        if(x == c){
            compteur++;
        }
    }
    return compteur;
}

//Niveau 7

double moyenne_vecteur(const std::vector<int>& v){
    double sum = 0;

    for(int x : v){
        sum += x;
    }

    return sum / v.size();
}

bool is_in_vecteur(const std::vector<int>& v, int n){
    for(int x : v){
        if(x == n){
            return true;
        }
    }
    return false;
}

//Niveau 8

std::array<std::array<int, 2>, 2> matrice_2x2(){
    std::array<std::array<int, 2>, 2> M;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            std::cout << "Entré la valeur ligne " << i + 1 << " colonne " << j + 1 << " : \n";
            std::cin >> M[i][j];
        }
    }

    return M;
}

std::array<std::array<int, 2>, 2> add_matrice_2x2(const std::array<std::array<int, 2>, 2>& M1 , const std::array<std::array<int, 2>, 2>& M2){
    std::array<std::array<int, 2>, 2> ADD;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            ADD[i][j] = M1[i][j] + M2[i][j];
        }
    }

    return ADD;
}

std::vector<std::vector<int>> matrice_nxm(){
    int n, m;

    std::cout << "Entré le nombre de ligne de la matrice > 0: ";
    std::cin >> n;

    while(n <= 0){
        std::cout << "Réessayer entré le nombre de ligne de la matrice > 0: ";
        std::cin >> n;
    }
    
    std::cout << "Entré le nombre de colonne de la matrice > 0: ";
    std::cin >> m;

    while(m <= 0){
        std::cout << "Réessayer entré le nombre de colonne de la matrice > 0: ";
        std::cin >> m;
    }

    std::vector<std::vector<int>> M(n, std::vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            std::cout << "Entré la valeur ligne " << i + 1 << " colonne " << j + 1 << " : \n";
            std::cin >> M[i][j];
        }
    }

    return M;
}

int somme_element_matrice(const std::vector<std::vector<int>>& M){
    int sum = 0;

    if(M.empty() || M[0].empty()) return 0;

    else{
        for(int i = 0; i < M.size(); i++){
            for(int j = 0; j < M[0].size(); j++){
                sum += M[i][j];
            }
        }
    }

    return sum;
}

std::vector<int> diagonal_principal_matrice(const std::vector<std::vector<int>>& M){

    std::vector<int> v;
    
    if(M.empty() || M[0].empty()) return v;

    else{
        for(int i = 0; i < std::min(M.size(),M[0].size()); i++){
            v.push_back(M[i][i]);
        }
    }
    
    return v;
}

int nbr_0_matrice(const std::vector<std::vector<int>>& M){
    int compteur = 0;

    if(M.empty() || M[0].empty()) return 0;
    else {
        for(int i = 0; i < M.size(); i++){
            for(int j = 0; j < M[0].size(); j++){
                if(M[i][j] == 0){
                    compteur++;
                }
            }
        }
    }

    return compteur;
}