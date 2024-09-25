#include <stdio.h>
#include <stdlib.h>

int main()
{
   float R , V;
   const float Pi = 3.14;
   printf(" entrer le volume d'une sphère : ");
   scanf("%f.2",&R);
   V = (4*Pi*pow (R,3)) ;
   printf("le volim du sphere est : %.2f",V);


    return 0;
}
