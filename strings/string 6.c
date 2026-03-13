#include <stdio.h>

int main() {
    char a[100];
    int count=0;
    fgets(a, sizeof(a), stdin); 
   
   for (int i=0;a[i]!='\0';i++){
        if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            count++;
        }
                }
    printf("%d",count);

    return 0;
}