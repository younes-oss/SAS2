#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c ;
    float delta ,s1,s2 , s0;
    printf("entre la valeur de a : ");
    scanf("%d", &a);
    printf("entre la valeur de b : ");
    scanf("%d", &b);
    printf("entre la valeur de c : ");
    scanf("%d", &c);

    delta = (b*b) - 4*a*c;

    s1 = -b-sqrt(delta)/2*a;
    s2 = -b+sqrt(delta)/2*a;
    s0 = -b / 2*a;

    if(delta>0){
        printf("vous avez deux solutions :\n s1 : %d \n s2 : %d : " ,s1,s2);
    }
    else if(delta = 0)

        printf( "vous avez une seul solution : %d",s0);

        else
            printf("alors l'équation n'admet pas de solution réelle");


}
