

#include <stdio.h>

int main()
{
	int n,i,j,count=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
	    for(j=i;j<n;j++){
	        if(arr[i]+arr[j]==12){
	            count++;
	            printf("point= %d,%d\n",arr[i],arr[j]);
	          
	            
	        }
	    }
	}
	printf("count= %d\n",count);
	return 0;
}



