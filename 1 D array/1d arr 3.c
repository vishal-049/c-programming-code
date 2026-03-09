#include<stdio.h>
int main()
{
    int a,m=0,i;
    int count=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>m){
            m=arr[i];
            count++;
        }
        
        }
        if(count==a){
            printf("Yes");
        }
        else
         printf("No");
   
   
   return 0;
}