#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[30] ;
    char prenom[30];
    int age;
    char sexe[10];
    char email[19];

    printf("taper le nom : ");
    scanf("\n%s",&nom);

    printf("taper le prenom : ");
    scanf("\n%s",&prenom);

    printf("taper le âge : ");
    scanf("\n%d",&age);

    printf("taper le sexe : ");
    scanf("\n%s",&sexe);

    printf("taper le email : ");
    scanf("\n%s",&email);


    printf("-----------------\n");
    printf("votre nom est : %s\n",nom);
    printf("votre prenom est : %s\n",prenom);
    printf("votre age est : %d\n",age);
    printf("votre sex est : %s\n",sexe);
     printf("votre email est : %s\n",email);

    return 0;
}
