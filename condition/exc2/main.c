#include <stdio.h>
#include <ctype.h>

int main()
{
    char c ;

    printf("entrer un caractere : ");
    scanf("%c", &c);

    c = tolower(c);

    switch(c){
        case 'a':
        case 'o':
        case 'u':
        case 'i':
        case 'y':
        case 'e':
            printf("%c est un voyelle \n",c);
            break;
            default:
            printf("%c n'est pas une voyelle.\n",c);
    }

    return 0;
}
