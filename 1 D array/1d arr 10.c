#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int m=-1;
    for(int i=a-1;i>=0;i--){
        int b=arr[i];
        arr[i]=m;
        if(b>m){
            m=b;
        }
    }
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}