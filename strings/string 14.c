#include <stdio.h>

int main() {
    char a[100],t;
    char b[100];
    fgets(a, sizeof(a), stdin); 

   for (int i=0;a[i]!='\0';i++){
        b[i]=a[i];
                }
              
    printf("%s",b);

    return 0;
}