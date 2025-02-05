#include <stdio.h>
void Affichage_Informations(void)
{
    char nom[50],prenom[50],sexe[50],email[50];
    int age;

    //ajoute informations
    printf("Nom : ");
    scanf("%s",nom);

    printf("Prenom : ");
    scanf("%s",prenom);

    printf("Age : ");
    scanf("%d",&age);

    printf("Sexe : ");
    scanf("%s",sexe);

    printf("Adresse email : ");
    scanf("%s",email);

    //affichage informations
    printf("Nom           : %s\n",nom);
    printf("prenom        : %s\n",prenom);
    printf("age           : %d\n",age);
    printf("sexe          : %s\n",sexe);
    printf("Adresse Email : %s\n",email);
}
int main()
{
    Affichage_Informations();
    return 0;
}