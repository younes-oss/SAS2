#include <stdio.h>

int main() {
    float revenu;
    int score;
    int duree;


    printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenu);

    printf("Entrez votre score de crédit (sur 1000) : ");
    scanf("%d", &score);

    printf("Entrez la durée du pret (en annees) : ");
    scanf("%d", &duree);

    if (revenu >= 30000 && score >= 700 && duree <= 10) {
        printf("eligible au pret \n");
    }
    else if (revenu >= 30000 && score >= 650 && duree <= 15) {
        printf("eligible au pret avec conditions \n");
    }
    else {
        printf("Non éligible au pret \n");
    }

    return 0;
}
