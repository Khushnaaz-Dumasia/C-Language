#include<stdio.h>
#define n 20
int main(void)
{
	int a[n],i,temp=0,j;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	//accending order
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	//deccending order
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
