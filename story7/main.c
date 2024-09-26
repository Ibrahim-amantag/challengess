#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,x2,y1,y2,z1,z2,dis ;
    printf("entre x1=");
    scanf("%f",&x1);
    printf("entre x2=");
    scanf("%f",&x2);
    printf("entrer y1=");
    scanf("%f",&y1);
    printf("entrer y2=");
    scanf("%f",&y2);
    printf("entrer z1=");
    scanf("%f",&z1);
    printf("entrer z2=");
    scanf("%f",&z2);
    dis = sqrt (pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2));

  printf("distance=%f",dis);
    return 0;
}
