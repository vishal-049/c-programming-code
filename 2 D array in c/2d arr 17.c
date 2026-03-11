#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<a;i++){
        int d=arr[i][i];
        int sum=0;
        for(int j=0;j<b;j++){
            if(j!=i){
                sum+=arr[i][j];
            }
        }
        if(d>sum)
            count++;
    }
    printf("%d",count);
    return 0;
}