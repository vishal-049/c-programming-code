
#include<stdio.h>
int main(){
    int a,b,m1=0,m2=0,m3=0;
    int count=0,c=0,d=0;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=0;j<b;j++)
    {
        int f=1;
        for(int k=0;k<j;k++)
        {
            if(arr[0][j]==arr[0][k])
            f=0;
        }
        if(f)
        count++;
    }
    for(int j=0;j<b;j++){
        int f=1;
        for(int k=0;k<j;k++){
            if(arr[1][j]==arr[1][k])
            f=0;
        }
        if(f)
        c++;
    }
    for(int j=0;j<b;j++){
        int f=1;
    for(int j=0;j<b;j++){
        int flag=1;
        for(int k=0;k<j;k++){
            if(arr[2][j]==arr[2][k])
            flag=0;
        }
        if(flag)
        d++;
    }
    }

    if(count>c && count>d){
        printf("0");
    }
    else if(c>count && c>d){
        printf("1");
    }
    else if(d>count && d>c){
        printf("2");
}
    return 0;
}