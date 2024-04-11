#include<stdio.h>
int main(void)
{
	int a[3][3],i,j,min[3]={0};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//smallest element row wise
	for(i=0;i<3;i++)
	{
		min[i]=a[i][0];
		for(j=0;j<3;j++)
		{
			if(a[i][j]<min[i])
			min[i]=a[i][j];
			printf("%d\t",a[i][j]);
		}
		printf("%d\n",min[i]);
	}
	//smallest element column wise
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			min[j]=a[0][j];
			if(a[i][j]<min[j])
			min[j]=a[i][j];
		}
	}
	for(j=0;j<3;j++)
	{
		printf("%d\t",min[j]);
	}
	return 0;
}
