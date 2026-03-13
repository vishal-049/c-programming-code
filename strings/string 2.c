#include <stdio.h>

int main() {
    char a[100];
    int count=0,v;

    fgets(a, sizeof(a), stdin);  
    for (int i=0;a[i]!='\0';i++){
        if(a[i]>=65 && a[i]<=90){
            printf("valid");
            v=1;
            break;
        }
    }
    if(v!=1)
    printf("Invalid");

    return 0;
}