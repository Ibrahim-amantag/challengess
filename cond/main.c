#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("entrer le nomber a :");
    scanf("%d",&a);
    printf("entrer le nomber b:");
    scanf("%d",&b);
    if (a*b>0)
        printf("a et b ont lr mem sing");
    else
        printf("no");
    return 0;
}
