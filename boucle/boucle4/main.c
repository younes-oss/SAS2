#include <stdio.h>

int main() {
    int n, count = 0, number = 1;

    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Veuillez entrer un entier strictement positif\n");
        return 1;
    }

    printf("Les %d premiers nombres impairs sont : ", n);

    while (count < n) {
        printf("%d", number);
        if(count<n-1){
            printf(", ");
        }
        number += 2;
        count++;
    }

    printf("\n");

    return 0;
}
