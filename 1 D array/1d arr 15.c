#include <stdio.h>
int main() {
    int a,b;
    int j=0;
      scanf("%d",&a);
    int arr[a];
      for(int i=0;i<a;i++){
        scanf("%d",&b);
        if(b!=0) {
            arr[j++]=b;
        }
    }
    while(j<a) {
        arr[j++]=0;
    }
    for(int i=0;i<a;i++) {
        printf("%d ",arr[i]);
    }
        printf("\n");

    return 0;
}