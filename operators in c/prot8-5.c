#include <stdio.h>

int main() {
    int a, b,c;

    scanf("%d %d", &a, &b);
    c=a;
    printf("%d %d", a/= b, c%= b);
    return 0;
}
