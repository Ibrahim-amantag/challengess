
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,m_g;
    printf("entrer a:");
       scanf("%f",&a);
    printf("entrer b:");
        scanf("%f",&b);
    printf("entrer c:");
        scanf("%f",&c);
    m_g= pow((a*b*c),(1/3));

    printf("Moyenne g�om�trique  = %.f",m_g);

    return 0;
}

