#include <stdio.h>

int main() {
    char a[100],t;
    int v=-1;
    fgets(a, sizeof(a), stdin); 
    scanf(" %c",&t);
   
   for (int i=0;a[i]!='\0';i++){
        if (a[i]==t)
        {
           printf("%d",i);
           v=1;
           break;
        }
        
                }
    if(v!=1)            
    printf("%d",-1);

    return 0;
}