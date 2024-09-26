#include <stdio.h>
#include <stdlib.h>


int main ()
  {

    float R1,R2,R3,rpur,rser;
    printf("entrer R1:");
    scanf("%f",&R1);

     printf("entrer R2:");
    scanf("%f",&R2);

     printf("entrer R3:");
     scanf("%f",&R3);
      rser=R1+R2+R3;
      rpur=R1*R2*R3/R1*R2+R1*R3;
    printf("entrer resitances %f/n",rser);
    printf("entrer resitances %f",rpur);
    return 0;
}
