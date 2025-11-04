#include<stdio.h>
int fac(int n, int r) {
    int factn=1;
  for(int i=1;i<=n;i++){

      factn=factn*i;
  }

    int factr=1;
  for(int i=1;i<=r;i++){

      factr=factr*i;
  }

      int factnr=1;
  for(int i=1;i<=(n-r);i++){

      factnr=factnr*i;
 
 
}  
  int ans;
  ans=factn/(factr*factnr);
  printf("Permutation is %d\n",ans);
}
int main()
{
int n,r;
printf("Enter n and r :");
  scanf("%d %d",&n,&r);
  fac(n,r);

}