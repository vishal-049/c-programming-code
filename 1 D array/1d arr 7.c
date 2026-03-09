#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int count=0,c=0;
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            count++;
        }
        else
          c++;
    }
    printf("Even:%d\n",count);
    printf("Odd:%d",c);
    return 0;
}