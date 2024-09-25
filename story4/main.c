#include <stdio.h>
#include <stdlib.h>

int main()

{
    float C;
    printf("entre la température en Celsius \n ");
    scanf("%f",&C);
    if(C < 0)
       printf("Solide");
     else if(0<=C && C<=100);
        printf("liquide");
    else
        printf("gaz");

return 0;


}
