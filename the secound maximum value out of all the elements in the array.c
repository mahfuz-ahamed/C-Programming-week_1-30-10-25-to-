#include <stdio.h>

int main()
{

int n;

scanf("%d",&n);
int arr[n],i;
for(i=0;i<n;i++){
    

scanf("%d",&arr[i]);

}
int temp=0;
int max=arr[0];

for(i=1;i<n;i++){
    if(arr[i]>max){
     temp=max;
    max=arr[i];
    }
    

}
    printf("secound max= %d\n",temp);
    return 0;
}