#include <stdio.h>

int main() {
    int n,sum=0,q;

    scanf("%d", &n);

    for (int i=0; n > 0; n = n / 10) {
        q=n%10;
        if(q%2==0)
        sum++;
    }

    printf("%d", sum);

    return 0;
}
