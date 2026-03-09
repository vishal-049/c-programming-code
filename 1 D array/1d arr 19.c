#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++) {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for (int i=0;i<a;i++) {
        int d=0;
        for (int j=0;j<i;j++) {
            if (arr[i]==arr[j]){
                d=1;
                break;
            }
        }
        if (!d) {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}