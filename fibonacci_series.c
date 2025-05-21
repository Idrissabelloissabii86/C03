#include <stdio.h>

int main() {
    int limite;
    int a = 0, b = 1, suivant;
    scanf("%d", &limite);

    // Affichage des deux premiers termes
    if (limite >= 0) printf("%d ", a);
    if (limite >= 1) printf("%d ", b);

    // Génération des termes suivants
    suivant = a + b;
    while (suivant <= limite) {
        printf("%d ", suivant);
        a = b;
        b = suivant;
        suivant = a + b;
    }

    printf("\n");
    return 0;
}