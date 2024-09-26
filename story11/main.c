#include <stdio.h>
#include <stdlib.h>

int main()
{
     float x2,x1,y2,y1,z2,z1,Distance;
    printf("entrer la distance x2");
    scanf("%f",&x2);

    printf("entrer la distance x1");
    scanf("%f",&x1);
       printf("entrer la distance y2");
     scanf("%f",&y2);
    printf("entrer la distance y1");
      scanf("%f",&y1);
     printf("entrer la distance z2");
     scanf("%f",&z2);
        printf("entrer la distance z1");
    scanf("%f",&z1);
    Distance = sqrt (pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z2,2));
    printf(" la distance entre deux points donnés dans un espace 3D :%f",Distance);
    return 0;
}
