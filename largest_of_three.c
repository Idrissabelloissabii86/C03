#include <stdio.h>

int main(){
    // création des variables
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    // Determination du plus grand nombre avec condition
    if (a >= b && a >= c){
        max = a;
    }else if (b >= a && b >= c){
        max = b;
    }else{
        max = c;
    }

    // affichage du résultat de la condition

    printf("Le plus grand nombre est : %d\n", max);

    return 0;
}