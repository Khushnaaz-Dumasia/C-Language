#include<stdio.h>
int main(void)
{
	int a[3][3],i,j,max[3]={0};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//largest element row wise
	for(i=0;i<3;i++)
	{
		max[i]=a[i][0];
		for(j=0;j<3;j++)
		{
			if(a[i][j]>max[i])
			max[i]=a[i][j];
			printf("%d\t",a[i][j]);
		}
		printf("%d\n",max[i]);
	}
	//largest element column wise
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			max[j]=a[0][j];
			if(a[i][j]>max[j])
			max[j]=a[i][j];
		}
	}
	for(j=0;j<3;j++)
	{
		printf("%d\t",max[j]);
	}
	return 0;
}
