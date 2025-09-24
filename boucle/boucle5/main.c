#include <stdio.h>

int main()
{
    int base, exposant, result = 1;
    printf("Entrez la base : ");
    scanf("%d", &base);

    printf("Entrez l'exposant : ");
    scanf("%d", &exposant);

    if (exposant < 0) {
        printf("Cet programme ne gere pas les exposants negatifs");
        return 1;
    }

    for (int i = 1; i <= exposant; i++) {
        result *= base;
    }

    printf("%d puissance %d = %d\n", base, exposant, result);

    return 0;
}
