#include <stdio.h>

int main()
{
    float kmh, ms;

    printf("Entrez la vitesse en kilom�tres par heure (km/h) : ");
    scanf("%f", &kmh);

    ms = kmh * 0.27778;

    printf("%.2f km/h = %.2f m/s\n", kmh, ms);

    return 0;
}
