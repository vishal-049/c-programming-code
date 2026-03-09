#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int b=1; 
    for(int i=0;i<a-1;i++) {
        for(int j=i+1;j<a;j++) {
            if(arr[i]==arr[j]){
                b=0;
                break;
            }
        }
        if(b==0) {
            break;
        }
    }
    if(b)
        printf("Yes\n");
    else
        printf("No");
    return 0;
}