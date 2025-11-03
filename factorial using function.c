#include<stdio.h>
int fac(int n) {
    int fact=1;
  for(int i=1;i<=n;i++){

      fact=fact*i;
  }
printf("factorial is %d",fact);

}
int main()
{
int n;
  scanf("%d",&n);
  fac(n);

}
