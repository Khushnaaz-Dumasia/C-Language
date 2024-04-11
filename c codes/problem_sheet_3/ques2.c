#include<stdio.h>
#define n 10
int main()
{
	int i,a[n],j;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=2;j<a[i];j++)
		{
			//check for prime number
			if(a[i]%j==0)
				break;
		}
			if(a[i]==j)
			{
				printf("%d\t",a[i]);
			}
	}

	return 0;
}
