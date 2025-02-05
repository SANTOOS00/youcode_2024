#include <stdio.h>
void Affichage_Temperature(void)
{
    double c;

    printf("Temperature en Celsius (°C) : ");
    scanf("%lf",&c);

    if (c < 0)
    {
        printf("Solide :)");
    }
    else if(0 <= c && c < 100)
    {
        printf("Liquide :)");
    }
    else 
    {
        printf ("Gaz :|");
    }
}
int main()
{
    Affichage_Temperature();
    return 0;
}