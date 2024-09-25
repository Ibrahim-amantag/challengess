#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km_h,m_s;
    printf("entrer km/h:\n");
    scanf("%f",&km_h);
    m_s = km_h*0.27778;
    printf("m_s = %f",m_s);
    return 0;
}
