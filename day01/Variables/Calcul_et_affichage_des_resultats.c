#include <stdio.h>
void Calcul_et_affichage_des_resultats(void)
{
    double a,b;

    printf("number 1 : ");
    scanf("%lf",&a);

    printf("number 2 : ");
    scanf ("%lf",&b);

    double add = a + b;
    double sous = a - b;
    double mul = a * b;

    printf ("Addition : %.2f\n",add);
    printf ("Soustraction : %.2f\n",sous);
    printf ("Multiplication : %.2f\n",mul);
    if (a != 0 && b != 0)
    {
        double divi = a / b;
        printf ("Division : %.2f\n",divi);
    }
    else {
        printf ("Erreur : division par zero :|");
    }

}
int main()
{
    Calcul_et_affichage_des_resultats();
    return 0;
}