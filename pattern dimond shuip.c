
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
  for(i=1;i<=n-1;i++){
  
  for(m=1;m<=i+1;m++){
      printf("   ");
  }
  for(m=i;m<n;m++){
      printf(" * ");
  }
  for(m=i;m<(n-1);m++){
      printf(" * ");
  }
  printf("\n");
  }


    return 0;
}