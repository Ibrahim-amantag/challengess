#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A,B;
    printf("entrer A:");
    scanf("%d",&A);
    printf("entrer B:");
    scanf("%d",&B);
    A = B + A;
    B = A - B;
    A = A - B;
    printf("entrer A est : %d \n",A);
    printf("entrer B est : %d \n",B);


    return 0;
}
