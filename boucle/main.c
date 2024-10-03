#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N,i;
   printf("entrer le nombre :");
   scanf("%d",&N);
   while(N<0 || N>10){
       printf(" entre le nombre :");
       scanf("%d",&N);

}
   i=0;
   while(i<=10){
        printf("%d *%d =%d \n",N,i, N*i);
        i++;
   }

      for(i=0;i<=10;i++){
       printf("%d *%d =%d \n",N,i, N*i);




    }
    return 0;

}
