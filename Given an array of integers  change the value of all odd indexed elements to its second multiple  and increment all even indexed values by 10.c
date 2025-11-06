

#include <stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++) {
		if(i %2!=0) {
			printf("second multiple= %d\n",arr[i]*2);
		}
		else {
			printf("add = %d \n ",arr[i] +10);

		}
	}
		return 0;
	}