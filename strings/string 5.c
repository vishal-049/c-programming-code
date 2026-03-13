#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    int len=0,i,b = 1;

    scanf("%s",a);

    while (a[len] != '\0') {
    len++;
}


    for (i=0;i<len/2;i++) {
        if (a[i]!=a[len-i-1]) {
            b=0;
            break;
        }
    }

    if (b)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}