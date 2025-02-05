#include <stdio.h>
void Moyenne_ponderee_de_trois_nombres(void)
{
    double num1,num2,num3,moyenne_ponderee;
    
    printf ("number 1 : ");
    scanf ("%lf",&num1);

    printf ("number 2 : ");
    scanf ("%lf",&num2);

    printf ("number 3 : ");
    scanf ("%lf",&num3);

    moyenne_ponderee = ((num1 * 2) + (num2 * 3) + (num3 * 5)) / 10;

    printf ("moyenne ponderee ==> %.2f",moyenne_ponderee);
    
    
}
int main()
{
    Moyenne_ponderee_de_trois_nombres();
    return 0;
}