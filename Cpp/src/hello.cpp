#include "hello.hpp"
#include "bibliotheque.hpp"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <array>

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

    std::cout << "entrez un entier 0 <= n <= 20: ";
    std::cin >> entier;

    while(entier < 0 || entier > 20){
        std::cout << "entrez un entier 0 <= n <= 20: ";
        std::cin >> entier;
    }

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

    long signe = 1;

    if (entier_droit < 0){
        signe = -1;
        entier_droit *= -1;
    }

    long entier_inverse = 0;

    while(entier_droit > 0){
        int dernier_chiffre = entier_droit % 10;
        entier_inverse = entier_inverse * 10 + dernier_chiffre;
        entier_droit /= 10;
    }

    entier_inverse *= signe;

    std::cout << "le nombre inverse est " << entier_inverse << std::endl;
}

void niveau_4(){

    // Niveau 4 : Fonctions

    //1. Créer une fonction qui retourne le carré d’un nombre.
    
    double x;
    std::cout << "Entré un nombre : ";
    std::cin >> x;

    std::cout << x << "^2 = " << carre_nombre(x) << std::endl;

    //2. Créer une fonction max(a, b) qui retourne le plus grand des deux.

    double x1, x2;

    std::cout << "Entré deux nombres : ";
    std::cin >> x1;
    std::cin >> x2;

    std::cout << "Le plus grand des deux nombres est : " << max_nombre(x1,x2) << std::endl;

    //3. Créer une fonction qui teste si un nombre est pair.

    int pair;

    std::cout << "Entré un nombre : ";
    std::cin >> pair;

    if(is_pair(pair)){
        std::cout << pair << " est pair.\n";
    }
    else {
        std::cout << pair << " est impair.\n";
    }

    //4. Créer une fonction qui calcule la moyenne de trois notes.

    double note1, note2, note3;

    std::cout << "Entrée 3 notes : ";
    std::cin >> note1;
    std::cin >> note2;
    std::cin >> note3;

    if (note1 < 0 || note1 > 20 || note2 < 0 || note2 > 20 || note3 < 0 || note3 > 20){
        std::cout << "une note n'est pas comprise entre 0 et 20.\n";
    }
    else{
        std::cout << "la moyenne des 3 est : " << moyenne_3_nombres(note1, note2, note3) << std::endl;
    }

    //5. Refaire l’exercice du nombre premier avec une fonction dédiée.

    int p;

    std::cout << "Entré un entier : ";
    std::cin >> p;

    if (is_prime(p)){
        std::cout << p << " est premier.\n";
    }
    else {
        std::cout << p << " n'est pas premier.\n";
    }
}

void niveau_5(){

    // Niveau 5 : chaînes de caractères

    //1. Demander une phrase et afficher sa longueur.

    std::string phrase;

    std::cin.ignore();
    std::cout << "Ecrire une phrase : ";
    std::getline(std::cin, phrase);

    std::cout << "La longueur de la phrase est de : " << phrase.size() << std::endl;

    //2. Compter le nombre de voyelles dans une chaîne.

    int voyelle = 0;

    std::cout << "Entré une phrase : ";
    std::getline(std::cin, phrase);

    for(char c : phrase){
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U' || c == 'y' || c == 'Y'){
            voyelle++;
        }
    }

    std::cout << "Il y a " << voyelle << " voyelles dans la phrase.\n";

    //3. Vérifier si un mot est un palindrome.

    std::string mot;

    std::cout << "Entré un mot : ";
    std::getline(std::cin, mot);

    if(is_palindrome(majuscule_to_minuscule(supp_espace_ponctuation(mot)))){
        std::cout << mot << " est un palindrome.\n";
    }
    else {
        std::cout << mot << " n'est pas un palindrome.\n";
    }

    //4. Mettre une chaîne en minuscule.

    std::string s;

    std::cout << "Entré une chaine de caractere : ";
    std::getline(std::cin, s);

    std::cout << majuscule_to_minuscule(s) << std::endl;

    //5. Compter combien de fois une lettre apparaît dans un mot.

    std::string lettre;

    std::cout << "Entré un mot : ";
    std::getline(std::cin, mot);
    std::cout << "Entré une lettre : ";
    std::getline(std::cin, lettre);


    std::cout << "Il y a " << nbr_iteration_lettre(majuscule_to_minuscule(mot), majuscule_to_minuscule(lettre)) << " fois la lettre " << lettre << " dans " << mot << std::endl;

}

void niveau_6(){

    // Niveau 6 : tableaux

    //0. Demander à l'utilisateur d'entrer un tableau de taille 5.

    int tab[5];

    for(int i = 0; i < 5; i++){
        std::cout << "Entré la valeur numero " << i+1 << " du tableau : ";
        std::cin >> tab[i];
    }

    //1. afficher le tableau.
    
    for(int n : tab){
        std::cout << n << std::endl;
    }

    //2. Calculer la somme des éléments d’un tableau.
    
    int sum = 0;

    for(int n : tab){
        sum += n;
    }

    std::cout << "la somme des éléments du tableau est " << sum << std::endl;

    //3. Trouver la plus grande valeur d’un tableau.

    int max = tab[0];

    for(int n : tab){
        max = std::max(max, n);
    }

    std::cout << "La plus grande valeur du tableau est : " << max << std::endl;

    //4. Compter combien de valeurs sont supérieures (au sens large) à 10.

    int compteur = 0;

    for(int n : tab){
        if(n >= 10){
            compteur++;
        }
    }

    std::cout << "Il y a " << compteur << " valeur >= 10 dans le tableau\n";

    //5. Inverser un tableau.

    int tab_inverse[5];

    for(int i = 0; i < 5; i++){
        tab_inverse[i] = tab[5 - 1 - i];
    }

    for(int n : tab_inverse){
        std::cout << n << std::endl;
    }
}

void niveau_7(){

    // Niveau 7 : Vector

    //1. Lire n nombres dans un vector<int>.

    int n;

    std::cout << "Entré la taille du vecteur : ";
    std::cin >> n;

    std::vector<int> v(n);

    for(int i = 0; i < n; i++){
        std::cout << "Entré la valeur numéro " << i+1 << " du vecteur : ";
        std::cin >> v[i]; 
    }
    //2. Afficher seulement les nombres pairs du vecteur.

    std::cout << "Les nombres pair du vecteur sont : ";
    for(int x : v){
        if(x % 2 == 0){
            std::cout << x << std::endl;
        }
    }

    //3. Calculer la moyenne des valeurs.

    
    std::cout << "La moyenne des valeurs du vecteur est : " << moyenne_vecteur(v) << std::endl;

    //4. Chercher si une valeur existe dans le vecteur.

    int valeur;

    std::cout << "Entré un entier : ";
    std::cin >> valeur;

    if(is_in_vecteur(v, valeur)){
        std::cout << valeur << " est dans le vecteur.\n";
    }
    else {
        std::cout << valeur << " n'est pas dans le vecteur.\n";
    }

    //5. Trier le vecteur dans l’ordre croissant.

    std::vector<int> v_trier = v;

    std::sort(v_trier.begin(), v_trier.end());

    std::cout << "voici le vecteur trier dans l'ordre croissant :\n";

    for(int x : v_trier){
        std::cout << x << std::endl;
    }
}

void niveau_8(){
    
    // Niveau 8 : matrices

    //1. Créer une matrice 2x2 et afficher ses éléments.

    std::array<std::array<int, 2>, 2> M = matrice_2x2();

    std::cout << "La matrice est : \n";
    std::cout << M[0][0] << " " << M[0][1] << std::endl;
    std::cout << M[1][0] << " " << M[1][1] << std::endl;
    
    //2. Additionner deux matrices 2x2.

    std::array<std::array<int, 2>, 2> M1 = matrice_2x2();
    std::array<std::array<int, 2>, 2> M2 = matrice_2x2();
    std::array<std::array<int, 2>, 2> ADD = add_matrice_2x2(M1, M2);

    std::cout << "la somme des 2 matrices est la matrice : \n";
    std::cout << ADD[0][0] << " " << ADD[0][1] << std::endl;
    std::cout << ADD[1][0] << " " << ADD[1][1] << std::endl;

    //3. Calculer la somme de tous les éléments d’une matrice.

    std::vector<std::vector<int>> N = matrice_nxm();

    std::cout << "La somme des elements de la matrice est : " << somme_element_matrice(N) << std::endl;

    //4. Afficher la diagonale principale.

    std::vector<int> v = diagonal_principal_matrice(N);

    std::cout << "la diagonal principal de la matrice est : ";

    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << "\n";

    //5. Compter combien de zéros contient la matrice.

    std::cout << "Il y a " << nbr_0_matrice(N) << " zéro dans la matrice.\n";
}