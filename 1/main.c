#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("entrer un nomber 10 et 20 :");
    scanf("%d",&N);
    while(N<10 || N>10){
            if(N<10){
            printf("plus petit \n");

    }

    else
         printf("plus grand \n ");
    printf("entre un nomber 10 et 20 :");
        scanf("%d",&N);

    }
    printf("bravo vous avez tapee un nomber 10 et 20 ");
    return 0;
}
