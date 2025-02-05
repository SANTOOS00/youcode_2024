#include <stdio.h>
void Nombre_entier_a_quatre_chiffres_en_ordre_inverse()
{
    int tab[4];

    printf ("Entrez 4 nombres \n");
    int i = 0;
    while(i < 4)
    {
        printf ("number %d : ",i + 1);
        scanf ("%d",&tab[i]);
        i++;
    }
    i = 0;
    while (i <= 2)
    {
        int temp = tab[i];
        tab[i] = tab[3 - i];
        tab[3 - i] = temp;
        i++;
    }
    i = 0;
    printf ("Les nombres dans l'ordre inverse : \n");
    while (i < 4)
    {
        printf ("number %d : %d\n",i + 1,tab[i]);
        i++;
    }

}
int main()
{
    Nombre_entier_a_quatre_chiffres_en_ordre_inverse();
    return 0;
}