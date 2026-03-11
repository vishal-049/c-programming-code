#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            for(int x=i;x<a;x++){
                for(int y=0;y<b;y++){
                    if(x==i && y<=j)
                    continue;
                    
                    if(arr[i][j]==arr[x][y]){
                        printf("%d",arr[i][j]);
                        return 0;
                    }
                }
            }
            }
        }
    
    return 0;
}
         
 
            
        
    