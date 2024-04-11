#include<stdio.h>
#define n 5
int main(void)
{
	int i,a[n],pos;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	printf("Enter positon");
	scanf("%d",&pos);
	//deleting an element from array
	if(pos>n)
		printf("Error");
	else
	{
		for(i=pos-1;i<n;i++)
		{
			a[i]=a[i+1];
		}
	}
	a[n-1]=0;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}