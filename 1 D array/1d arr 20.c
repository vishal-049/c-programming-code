#include<stdio.h>
int main(){
    int a,d=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<0){
            printf("%d ",d);
        }
        else
          printf("%d ",arr[i]);
    }
    return 0;
}