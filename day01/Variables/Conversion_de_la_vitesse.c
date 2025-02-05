#include <stdio.h>
void Conversion_de_la_vitesse(void)
{
    double kmh,ms;

    printf("Enter the speed in kilometers per hour : ");
    scanf("%lf",&kmh);

    ms = kmh * 0.27778;
    printf(" ==> %.2f m/s",ms);

}
int main()
{
    Conversion_de_la_vitesse();
    return 0;
}