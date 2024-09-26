#include <stdio.h>
#include <stdlib.h>

int main()
{
        int h,t,m,s;
    printf ("entrer le num:");
    scanf("%d",&t);
    h=t/60;

    printf(" %d hourse ",h);
    m = h/60;
       printf(" %d minute",m);
    s = m/60;
       printf("  %d secondeS ",s);
    return 0;
}


