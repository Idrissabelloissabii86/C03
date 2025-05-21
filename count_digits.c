#include <stdio.h>

int main() {
    int n, original, compteur = 0;

    // Demande à l'utilisateur d'entrer un entier
    scanf("%d", &n);

    // Conserver la valeur d'origine pour l'affichage final
    original = n;

    // Cas particulier : si l'utilisateur entre 0
    if (n == 0) {
        compteur = 1; // 0 est un chiffre unique
    } else {
        // Si l'entier est négatif, on le rend positif pour compter les chiffres
        if (n < 0)
            n = -n;

        // Boucle pour diviser par 10 à chaque étape et compter les chiffres
        while (n > 0) {
            n = n / 10; // Supprimer le dernier chiffre
            compteur++; // Incrémenter le compteur de chiffres
        }
    }

    // Affichage du résultat
    printf("%d contient %d chiffre(s).\n", original, compteur);

    return 0;
}