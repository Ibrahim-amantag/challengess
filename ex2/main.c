#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("enter votre age :");
    scanf("%d",&age);
    if(age <18)
        printf("vous n etes paseligible pour voter");
    else
        printf("vous etes eligible pour voter");
    else if(age >18)
         printf("erorr");

    return 0;
}
