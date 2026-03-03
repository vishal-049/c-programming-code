#include <stdio.h>

int main() {
    int a, b, i;
    int result = 0;

    scanf("%d %d", &a, &b);

    for (i = 1; i <= b; i++) {
        if(i%a==0)
        
        result +=i ;
    }

    printf("%d", result);

    return 0;
}
