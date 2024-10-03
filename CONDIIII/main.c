#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,somme;
    printf("entrez le nombers ");
    scanf("%d",&a);
    printf("entrez le nombers");
    scanf("%d",&b);
    somme = a+b;
    if(a == b)
     somme *= 3;
     printf("le resultat est: %d\n",somme);
    return 0;
}
