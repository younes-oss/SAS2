#include <stdio.h>

int main()
{
    int n, somme = 0;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Veuillez entrer un entier positif \n");
    } else {
        for (int i = 1; i <= n; i++) {
            somme += i;
        }
        printf("La somme des %d premiers nombres naturels est : %d\n", n, somme);
    }

    return 0;
}
