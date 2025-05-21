#include <stdio.h>

int main() {
    int limite;  // Variable pour stocker la valeur limite saisie par l'utilisateur

    // Demande à l'utilisateur de saisir une valeur limite
    scanf("%d", &limite);  // Lecture de la valeur entrée par l'utilisateur

    // Initialisation des deux premiers termes de la suite de Fibonacci
    int a = 0;
    int b = 1;

    // Tant que la valeur actuelle est inférieure ou égale à la limite, on affiche les termes
    while (a <= limite) {
        printf("%d ", a);  // Affichage du terme courant

        // Calcul du terme suivant de la suite
        int temp = a + b;  // temp contient la somme des deux derniers termes
        a = b;             // Le nouveau a devient l'ancien b
        b = temp;          // Le nouveau b devient la somme calculée
    }

    return 0;      // Fin du programme
}
