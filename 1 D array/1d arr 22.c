#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=1;i<a-1;i++) {
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}