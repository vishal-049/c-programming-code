#include <stdio.h>

int main() {
  
  int a,b,m=0,m2=0;
  scanf("%d %d",&a,&b);
  int arr[a][b];
  for(int i=0;i<a;i++){
      for(int j=0;j<b;j++){
          scanf("%d",&arr[i][j]);
      }
  }
  for(int i=0;i<a;i++){
      for(int j=0;j<b;j++){
          if(arr[i][j]>m){
              m=arr[i][j];
          }
      }
  }
  for(int i=0;i<a;i++){
      for(int j=0;j<b;j++){
          if(arr[i][j]>m2 && arr[i][j]!=m){
              m2=arr[i][j];
          }
      }
  }
            printf("%d ",m2);

    return 0;
}