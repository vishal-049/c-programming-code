#include <stdio.h>

int main()

{   int b,a;
    scanf("%d %d",&a,&b);
    if (a<b)
    printf("%d is greater",b);
    else if (b<a)
    printf("%d is greater",b);
    else
    printf("equal");
    return 0;
}