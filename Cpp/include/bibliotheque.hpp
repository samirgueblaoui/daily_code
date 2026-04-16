#pragma once
#include <string>
#include <vector>

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
double moyenne_vecteur(std::vector<int> v);
bool is_in_vecteur(std::vector<int> v, int n);
