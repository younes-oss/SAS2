#include <stdio.h>

int main()
{
    int n, result = 1;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("La factorielle d'un nombre negatif est impossible\n");
    } else {
        for (int i = n; i >= 1; i--) {
            result *= i;
        }
        printf("La factorielle de %d est : %d\n", n, result);
    }

    return 0;
}
