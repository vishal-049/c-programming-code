#include <stdio.h>
#include <stdlib.h> 
int main() 
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++) {
        scanf("%d", &arr[i]);
    }
    int c=arr[0];
    for(int i=1;i<a;i++) {
        if (abs(arr[i])<abs(c)) {
            c=arr[i];
        }
        else if (abs(arr[i])==abs(c)&&arr[i]>c){
            c=arr[i];
        }
    }
    printf("%d",c);
    return 0;
}