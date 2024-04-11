#include<stdio.h>
#define n 10
int main()
{
	int i,a[n],j,sum=0;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	//sum of all elements in array
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of all elements is %d",sum);

	return 0;
}
