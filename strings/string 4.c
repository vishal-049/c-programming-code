#include <stdio.h>
#include <string.h>

int main() {
    char a[100],temp;
    int len=0,i,j=0;

    scanf("%s",a);

    while (a[len] != '\0') {
    len++;
}
    for (i=0,j=len-1;i<j;i++,j--) {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("%s",a);
    return 0;
}