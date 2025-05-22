#include <stdio.h>  // Inclusion de la bibliothèque standard d’entrée/sortie

int main() {
    int limit;           // Variable pour stocker la limite saisie par l'utilisateur
    int a = 0, b = 1;     // Les deux premiers termes de la série de Fibonacci
    int next;             // Terme suivant de la série

    // Demande à l'utilisateur d'entrer une valeur (même si elle est plus grande que 5)
    scanf("%d", &limit);

    printf("Fibonacci : ");

    // On affiche les termes de la série tant qu'ils sont <= 5, indépendamment de la limite entrée

    // Affiche le premier terme si <= 5
    if (a <= 5) printf("%d ", a);

    // Affiche le deuxième terme si <= 5
    if (b <= 5) printf("%d ", b);

    // Calcule le prochain terme
    next = a + b;

    // Continue à afficher les termes tant qu’ils sont inférieurs ou égaux à 5
    while (next <= 5) {
        printf("%d ", next);  // Affiche le terme
        a = b;                // Avance dans la série
        b = next;
        next = a + b;         // Calcule le prochain terme
    }

    printf("\n");  // Nouvelle ligne après la série
    return 0;      // Fin du programme
}
