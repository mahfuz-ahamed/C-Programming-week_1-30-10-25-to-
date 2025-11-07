
#include <stdio.h>

int main() {
  int i,j,n=5,k,m;
  for(i=1;i<=n;i++){
  for(j=i;j<=n;j++){
      printf("   ");
  }
  
  for(k=1;k<=i;k++){
      printf(" * ");
      
  }
  for(m=1;m<i;m++){
      printf(" * ");
  }
  printf("\n");
  }


    return 0;
}