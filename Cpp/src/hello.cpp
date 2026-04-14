#include "hello.hpp"
#include "bibliotheque.hpp"
#include <iostream>
#include <string>
#include <cmath>

void niveau_1(){

    //Niveau 1 : bases

    //1. Écrire un programme qui affiche Bonjour.

    std::cout << "Bonjour\n";

    //2. Demander un prénom à l’utilisateur et afficher Bonjour, <prenom>.

    std::string prenom;
    std::cout << "Quelle est ton prenom ? ";
    std::cin >> prenom;
    std::cout << "Bonjour, " << prenom << std::endl;

    //3. Demander deux nombres et afficher leur somme.

    int nombre1, nombre2;
    
    std::cout << "On vas faire a + b\n";
    std::cout << "a = ";
    std::cin >> nombre1;
    std::cout << "b = ";
    std::cin >> nombre2;
    std::cout << "a + b = " << nombre1 + nombre2 << std::endl;

    //4. Demander un nombre et dire s’il est positif, négatif ou nul.

    int nombre;
    std::cout << "Entrer un nombre : ";
    std::cin >> nombre;

    if (nombre > 0) std::cout << "Strictement positif\n";
    else if (nombre == 0) std::cout << "Nulle\n";
    else std::cout << "Strictement negatif\n";

    //5. Demander un entier et dire s’il est pair ou impair.
    
    int entier;
    std::cout << "Entrer un entier : ";
    std::cin >> entier;

    if (entier % 2 == 0) std::cout << "Pair\n";
    else std::cout << "Impair\n";
}

void niveau_2(){

    //Niveau 2 : conditions et boucles

    //1. Demander une note et afficher Admis 
    //si elle est supérieure ou égale à 10 sinon Refusé.

    int note;

    std::cout << "Quelle est ta note ? ";
    std::cin >> note;

    if (note > 20 || note < 0) {
        std::cout << "pas une note\n";
    }
    else if (note >= 10){
        std::cout << "Admis\n";
    }
    else {
        std::cout << "Refuse\n";
    }

    //2. Afficher les nombres de 1 à 10 avec une boucle for

    for (int i = 1; i <= 10; i++){
        std::cout << i << std::endl;
    }

    //3. Afficher les nombres pairs de 0 à 20.

    for (int i = 0; i <= 20; i += 2){
        std::cout << i << std::endl;
    }

    //4. Calculer la somme des nombres de 1 à n

    int n;

    std::cout << "Entrez un entier >= 1 : ";
    std::cin >> n;

    std::cout << "la somme de 1 à " << n << " est " << (n+1)* n/2 << std::endl;

    //5. Afficher la table de multiplication d’un nombre choisi par l’utilisateur.

    int table;

    std::cout << "choisir une table de multiplication : ";
    std::cin >> table;

    for(int i = 1; i < 11; i++){
        // A ameliorer : tu peux afficher `table << " x " << i << " = " << table * i`
        // pour rendre la table plus lisible.
        std::cout << i << " x " << table << " = " << i * table << std::endl;
    }
}

void niveau_3(){

    // Niveau 3 : logique un peu plus poussée

    //1. Calculer la factorielle d’un entier.

    int entier;

    std::cout << "entrez un entier positif : ";
    std::cin >> entier;

    long long factorielle = 1;

    for (int i = 2 ; i <= entier; i++){
        factorielle *= i;
    }
    std::cout << entier << "! = " << factorielle << std::endl;

    //2. Vérifier si un nombre est premier.

    int p;

    std::cout << "Entrez un entier positif : ";
    std::cin >> p;

    if (is_prime(p)){
        std::cout << p << " est premier\n";
    }
    else {
        std::cout << p << " n'est pas premier\n";
    }
    
    //3. Trouver le plus grand de trois nombres.

    int nombre1, nombre2, nombre3;

    std::cout << "Entré 3 nombres : ";
    std::cin >> nombre1;
    std::cin >> nombre2;
    std::cin >> nombre3;

    int max = nombre1;

    if (max < nombre2){
        max = nombre2;
    }
    if (max < nombre3){
        max = nombre3;
    }

    std::cout << "le maximum des 3 nombres est " << max << std::endl;

    //4. Compter le nombre de chiffres d’un entier.

    long entier1;

    std::cout << "entré un entier : ";
    std::cin >> entier1;

    long entier2 = entier1;

    std::cout << entier1 << " a " << chiffre_nombre(entier2) << " chiffres\n";

    //5. Inverser un nombre entier, par exemple 1234 devient 4321

    long entier_droit;

    std::cout << "entré un entier : ";
    std::cin >> entier_droit;

    double entier_inverse = 0;

    while(entier_droit > 0){
        double x = entier_droit / 10.0;
        entier_droit /= 10;

        entier_inverse += std::pow(10, chiffre_nombre(entier_droit) + 1) * (x - entier_droit);
    }

    std::cout << "le nombre inverse est " << entier_inverse << std::endl;
}


