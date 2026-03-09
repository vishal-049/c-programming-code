#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        int m=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j])
            {
              m=1;
              break;
            }
        }
        if(m==0){
            printf("%d",arr[i]);
        }
    }
    return 0;
}