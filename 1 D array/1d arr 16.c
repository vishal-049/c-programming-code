#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int m1=arr[0];
    int m2=arr[1]-arr[0];
    for(i=1;i<a;i++){
        int b=arr[i]-m1;
        if(b>m2){
            m2=b;
        }
        if(arr[i]<m1){
            m1=arr[i];
        }
    }
    printf("%d",m2);
    
    return 0;
}