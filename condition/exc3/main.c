#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,puissance =1,somme = 0;
    printf("entre le premier nombre : ");
    scanf("\n%d", &a);

    printf("entre le deuxieme nombre : ");
    scanf("\n%d", &b);

    somme = a+b;
    puissance = (a+b)*3;
    if(a==b)
        printf("le triple de la somme est : %d",puissance);
    else
        printf("la somme est : %d ",somme);

    return 0;
}
