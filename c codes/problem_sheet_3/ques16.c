#include<stdio.h>
int main(void)
{
	int i,a[10],n=5,pos,ndata;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	printf("Enter number to add");
	scanf("%d",&ndata);
	printf("Enter positon");
	scanf("%d",&pos);
	//add a new element in array
	for(i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[i]=ndata;
	n++;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
