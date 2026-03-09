#include <stdio.h>
int main() 
{
    int a;
    int sum=0;
    int b=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
        }
    for(int i=0;i<a;i++){
        if(b==sum-b-arr[i]) {
            printf("%d\n",i);
            return 0;
        }
        b+= arr[i];
    }
    printf("-1\n");
    return 0;
}