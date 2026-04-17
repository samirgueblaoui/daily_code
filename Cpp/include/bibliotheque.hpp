#pragma once
#include <string>
#include <vector>
#include <array>

//niveau 3
bool is_prime(int p);
int chiffre_nombre(long nombre);

//niveau 4
double carre_nombre(double x);
double max_nombre(double x, double y);
bool is_pair(int n);
double moyenne_3_nombres(double x1, double x2, double x3);

//Niveau 5
std::string supp_espace_ponctuation(std::string s);
bool is_palindrome(std::string s);
std::string majuscule_to_minuscule(std::string s);
std::string minuscule_to_mjuscule(std::string s);
int nbr_iteration_lettre(std::string s, std::string s2);

//Niveau 7
double moyenne_vecteur(const std::vector<int>& v);
bool is_in_vecteur(const std::vector<int>& v, int n);

//Niveau 8
std::array<std::array<int, 2>, 2> matrice_2x2();
std::array<std::array<int, 2>, 2> add_matrice_2x2(const std::array<std::array<int, 2>, 2>& M1 , const std::array<std::array<int, 2>, 2>& M2);
std::vector<std::vector<int>> matrice_nxm();
int somme_element_matrice(const std::vector<std::vector<int>>& M);
std::vector<int> diagonal_principal_matrice(const std::vector<std::vector<int>>& M);
int nbr_0_matrice(const std::vector<std::vector<int>>& M);