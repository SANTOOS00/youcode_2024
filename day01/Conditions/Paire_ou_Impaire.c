#include <stdio.h>
void paire_ou_Impaire()
{
    int num;
    printf ("Entrez un nombre : ");
    scanf ("%d",&num);

    if (num % 2 == 0)
    {
        printf ("pair :)");
    }
    else {
        printf ("impair :)");
    }
}
int main()
{
    paire_ou_Impaire();
    return 0;
}