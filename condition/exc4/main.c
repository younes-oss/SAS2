#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    float delta, s1, s2, s0;

    printf("entre la valeur de a : ");
    scanf("%d", &a);
    printf("entre la valeur de b : ");
    scanf("%d", &b);
    printf("entre la valeur de c : ");
    scanf("%d", &c);

    delta = (b * b) - 4 * a * c;

    if (delta > 0) {
        s1 = (-b - sqrt(delta)) / (2 * a);
        s2 = (-b + sqrt(delta)) / (2 * a);
        printf("Vous avez deux solutions :\n s1 = %f\n s2 = %f\n", s1, s2);
    }
    else if (delta == 0) {
        s0 = (-b) / (2.0 * a);
        printf("Vous avez une seule solution : %f\n", s0);
    }
    else {
        printf("L'équation n'admet pas de solution réelle.\n");
    }

    return 0;
}
