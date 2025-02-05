#include <stdio.h>
#include <math.h>
void Calcul_de_la_moyenne_geometrique()
{
    double a,b,c,Moyenne_geometrique;

    printf("entre number a");
    scanf("%lf",&a);

    printf("entre number b");
    scanf("%lf",&b);

    printf("entre number c");
    scanf("%lf",&c);

    Moyenne_geometrique = pow(a * b * c, 1.0 / 3.0);
    

    printf ("Moyenne geometrique est : %.2f",Moyenne_geometrique);

}
int main()
{
    Calcul_de_la_moyenne_geometrique();
    return 0;
}
