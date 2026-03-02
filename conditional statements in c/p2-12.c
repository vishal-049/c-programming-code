#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if (num>=90 && num<=100)
    printf("grade A");

    else if (num>=75 && num<90)          
        printf("grade B");
    
    
    else 
    printf("grade C");

    return 0;
}
