

#include <stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	int sum1=0,sum2=0;
	for(i=0; i<n; i++) {
		if(i %2!=0) {
			sum1=sum1+arr[i];

		}
		else {
			sum2=sum2+arr[i];


		}

	}
	int diff=sum1-sum2;
	printf("difference OF even and odd numbefr sum = %d ",diff);
	return 0;
}