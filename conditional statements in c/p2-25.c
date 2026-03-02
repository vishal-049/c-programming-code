#include <stdio.h>

int main() {
    int  a, b,c;

    scanf("%d", &c);
    scanf("%d %d", &a, &b);

    switch(c) {
        case 1:
            
            printf("Sum = %d", a + b);
            break;

        case 2:
            printf("Difference = %d", a - b);
            break;

        case 3:
            printf("Product = %d", a * b);
            break;

        case 4:
            printf("Quotient = %d", a / b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
