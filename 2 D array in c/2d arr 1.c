#include <stdio.h>
#include <limits.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    int a[A][B];
    int max[A],min[A];
    for(int i=0;i<A;i++){
        max[i]=INT_MIN;
        min[i]=INT_MAX;
        for(int j=0;j<B;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]>max[i])
              max[i]=a[i][j];
            if(a[i][j]<min[i])
              min[i]=a[i][j];
        }
    }
    int d=INT_MIN;
    for(int i=0;i<A;i++)
        for(int j=i+1;j<A;j++) {
            int p1=max[i]*max[j];
            int p2=min[i]*min[j];
            if(p1>d) 
              d=p1;
            if(p2>d)  
              d=p2;
        }
    printf("%d",d);
    return 0;
}