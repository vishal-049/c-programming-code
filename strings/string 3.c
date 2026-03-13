#include <stdio.h>

int main() {
    char a[100];
    int count=0,v;

    fgets(a, sizeof(a), stdin);  
    for (int i=0;a[i]!='\0';i++){
        if(a[i]!='@'){
            printf("%c",a[i]);
             }
             else{
                 break;
             }
    }
    

    return 0;
}