#include <stdio.h>
void Conversion_de_la_temperature(void)
{
    double c ;
    double k;

    printf("la température en Celsius : ");
    scanf("%lf",&c);

    k = c + 273.15;

    printf("Temperature in Kelvin: %.2f k\n",k);
}
int main()
{
    Conversion_de_la_temperature();
    return 0;
}