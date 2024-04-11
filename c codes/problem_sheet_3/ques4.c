#include<stdio.h>
#define n 5
int main()
{
	int i,a[n],j=n-1,temp=0;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	//reverse of an array
	for(i=0;i<=j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("\n Reverse of an array\n");
	for(j=0;j<n;j++)
	{
		printf("%d\t",a[j]);
	}
	return 0;
}
