#include<stdio.h>
int main(){
    int a,b,min=100000,index=10;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        int sum=0;
        for(int j=0;j<b;j++){
            sum+=arr[i][j];
        }
        sum/=b;
        if (min>sum){
            min=sum;
            index=i;
        }
        
    }
    printf("%d",index);
    return 0;
}
         
 
            
        
    