#include <stdio.h>
#include <stdlib.h>


   int main()
{
    int A,B,C;
    printf("entrer A:");
    scanf("%d",&A);
    printf("entrer B:");
    scanf("%d",&B);
    C = A;
    A = B;
    B = C;
    printf("entrer A est : %d \n",A);
    printf("entrer B est : %d \n",B);

    return 0;
}


