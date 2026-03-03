#include<stdio.h>
int main()
{
    int a,b,e=0;
    int count=0,c=0;
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&b);
        if(b>20){
            count++;
            c++;
        
        
        if(c>e){
            e=c;
        }    
        }
        else{
            c=0;
        }
    
        
        
        a--;
    }
    printf("Congestion Minutes:%d\n",count);
    printf("Longest Congestion Streak:%d",e);
    
    return 0;
}