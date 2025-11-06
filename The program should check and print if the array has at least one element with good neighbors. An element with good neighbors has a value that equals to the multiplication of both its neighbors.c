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
    if(arr[i]==arr[i-1]+arr[i+1]){
        
        printf("Good Neighboure\n");
        break;
    }
    else{
       printf(" NOT Good Neighboure\n");
       break;
    }

}
  
    return 0;
}