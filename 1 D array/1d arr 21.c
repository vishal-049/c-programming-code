#include <stdio.h>

int main() {
    int a,v=1,c=-1;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        if(v==1){
        for(int j=i+1;j<a;j++){
            
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                v=0;
               
               
            }
             
            
    }
        }
        else{
            break;
        }
    }
    if(v==1){
        printf("%d",c);
    }
    return 0;
}