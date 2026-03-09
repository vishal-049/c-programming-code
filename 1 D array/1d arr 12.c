#include <stdio.h>
int main() 
{
    int a,b;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++) 
     scanf("%d",&arr[i]);
     scanf("%d",&b);
    for(int i=0;i<a;i++) 
    {
        for(int j=i+1;j<a;j++)
        {
            if(arr[i]+arr[j]==b) 
            {
                printf("%d %d\n",arr[i],arr[j]);
                return 0;
            }
        }
    }
    printf("No pair");
    return 0;
}