#include<stdio.h>
int main(void)
{
	int a[3][3],i,j,rsum[3]={0},csum[3]={0},sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//sum of all elements
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
			rsum[i]=rsum[i]+a[i][j];
			csum[j]=csum[j]+a[i][j];
			sum=sum+a[i][j];
		}
		printf("%d\n",rsum[i]);
	}
	for(j=0;j<3;j++)
	{
		printf("%d\t",csum[j]);
	}
	printf("%d\t",sum);
	return 0;
}
