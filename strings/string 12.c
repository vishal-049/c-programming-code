#include <stdio.h>

int main() {
    char a[100];
    int count=-1;
    fgets(a, sizeof(a), stdin); 
   
   for (int i=0;a[i]!='\0';i++){
        if (a[i]>='A' && a[i]<='Z'||a[i]>='a' && a[i]<='z'||a[i]>='0' && a[i]<='9')
        {
           continue; 
        }
        else{
            count++;
        }
                }
    printf("%d",count);

    return 0;
}