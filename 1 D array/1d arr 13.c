
#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int arr[a];
    int sum=0;
    int count=0;
    for(int i=0;i<a;i++) {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    float avg=(float)sum/a;
    for(int i=0;i<a;i++) {
        if(arr[i]>avg)count++;
    }
    printf("%d",count);
    return 0;
}
