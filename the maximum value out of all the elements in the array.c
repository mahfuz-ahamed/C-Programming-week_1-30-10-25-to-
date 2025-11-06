#include <stdio.h>

int main()
{

int n;
int arr[n],i;
scanf("%d",&n);
for(i=0;i<n;i++){
    

scanf("%d",&arr[i]);

}
int max=arr[0];

for(i=1;i<n;i++){
    if(arr[i]>max){
    max=arr[i];
    }
    

}
    printf("max= %d\n",max);
    return 0;
}