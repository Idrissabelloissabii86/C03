#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int nombre, nombre_inverse = 0;

    // Demander à l'utilisateur de saisir un entier
    scanf("%d", &nombre);

    // Vérifie si le nombre est négatif
    int negatif = 0;
    if (nombre < 0) {
        negatif = 1;
        nombre = -nombre; // On travaille avec sa valeur absolue
    }

    // Logique d'inversion
    while (nombre != 0) {
        int chiffre = nombre % 10;              // Dernier chiffre
        nombre_inverse = nombre_inverse * 10 + chiffre; // Construction de l'inverse
        nombre /= 10;                           // Supprimer le dernier chiffre
    }

    // Si le nombre était négatif, on remet le signe
    if (negatif) {
        nombre_inverse = -nombre_inverse;
    }

    // Affichage du résultat
    printf("Nombre inversé : %d\n", nombre_inverse);

    return 0;
}