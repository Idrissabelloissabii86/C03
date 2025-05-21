#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Lire la température en Celsius
    scanf("%f", &celsius);

    // Conversion
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Affichage du résultat
    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);

    return 0;
}