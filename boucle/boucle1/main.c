#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n ;
   printf("entrer un nombre : ");
   scanf("%d" , &n);

   for(int i = 0;i<=10;i++){
    printf("%d * %d = %d\n",n,i,n*i);
   }
}
