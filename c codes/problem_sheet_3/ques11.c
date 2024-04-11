#include<stdio.h>
int main(void)
{
	int a[3][3],i,j,csum[3]={0};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//sum of the column elements
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
			csum[j]=csum[j]+a[i][j];
		}
		printf("\n");
	}
	for(j=0;j<3;j++)
	{
		printf("%d\t",csum[j]);
	}
	return 0;
}
