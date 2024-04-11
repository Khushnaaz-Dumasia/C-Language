#include<stdio.h>
int main(void)
{
	int a[3][3],i,j,rsum[3]={0};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//sum of the row elements
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
			rsum[i]=rsum[i]+a[i][j];
		}
		printf("%d\n",rsum[i]);
	}
	return 0;
}
