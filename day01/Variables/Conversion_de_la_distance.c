#include <stdio.h>
void Conversion_de_la_distance(void)
{
    double km,yards;
    printf("la distance en kilometres : ");
    scanf("%lf",&km);

    yards = km * 1093,61;

    printf("transforme en yards : %.2f yards",yards);
}
int main()
{
    Conversion_de_la_distance();
    return 0;
}