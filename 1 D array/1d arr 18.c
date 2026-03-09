#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++) {
        scanf("%d",&arr[i]);
    }
    int m=1,c=1;
    for (int i=1;i<a;i++) {
        if (arr[i]>arr[i-1]){
            c++;
        } 
        else {
            c=1;
        }
        if (c>m)
            m=c;
    }
    printf("%d\n",m);
    return 0;
}