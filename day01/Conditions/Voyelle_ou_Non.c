#include <stdio.h>
void Voyelle_ou_Non()
{
    char cara;

    printf ("entrez un caractere : ");
    scanf ("%c",&cara);


    switch (cara)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
        printf ("%c est une voyelle",cara);
        break;
    
    default:
    printf ("n'est pas une volelle ");
    }
}
int main()
{
    Voyelle_ou_Non();
    return 0;
}