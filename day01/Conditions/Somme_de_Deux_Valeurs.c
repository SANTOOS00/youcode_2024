#include <stdio.h>
int somme_ou_triple(int a, int b)
{
    int res = a + b;
    if (a == b)
    {
        return 3 * res;
    }
    else 
    {
        return res;
    }
}
void entre_number()
{
    int num1,num2;
    printf("number 1 : ");
    scanf("%d",&num1);

    printf("number 2 : ");
    scanf ("%d",&num2);

    int res = somme_ou_triple(num1,num2);
    printf ("Resultat : %d",res);
}
int main()
{
    entre_number();
    return 0;
}