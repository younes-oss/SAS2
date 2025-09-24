#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,count=0,number =2;
    printf("entrer un nombre : ");
    scanf("%d" ,&n);

    if(n<0){
        printf("entrer un nombre positif ");
    }

    printf("Les %d premiers nombres pairs sont : ", n);
        while(count<n){
            printf("%d", number);
            if(count<n-1){
                printf(", ");
            }
            number+=2;
            count++;

    }


    return 0;
}
