#include <stdio.h>
#include <stdlib.h>

int main()
{
    float langueur, largeur;
    float l,p;
    printf("entrer la langueur de rectangle ; ");
    scanf("%f",&langueur);
    printf("entrer la largeur de rectangle ; ");
    scanf("%f",&largeur);
    l=(langueur+largeur)*2;
    p=langueur*largeur;
    printf("le perimetre de rectangle : %.2f\n",p);
    printf("le l aire de rectangle : %.2f",l);

    return 0;
}
