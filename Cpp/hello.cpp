#include "hello.hpp"
#include <iostream>
#include <string>

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