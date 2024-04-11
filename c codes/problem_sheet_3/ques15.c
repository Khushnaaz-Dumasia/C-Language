#include<stdio.h>
#define n 5
int main(void)
{
	int A[n],B[n],C[n*2],i,j,temp=0;
	for(i=0;i<n;i++)
	{
		printf("Enter A[%d] :",i);
		scanf("%d",&A[i]);
		C[i]=A[i];
	}
	for(j=0;j<n;j++)
	{
		printf("Enter B[%d] :",j);
		scanf("%d",&B[j]);
		C[i]=B[j];
		i++;
	}
	//merge two array
	for(i=0;i<(n*2);i++)
	{
		printf("%d\t",C[i]);
	}
	//sorting of two array
	for(i=0;i<(n*2);i++)
	{
		for(j=i+1;j<(n*2);j++)
		{
			if(C[i]>C[j])
			{
				temp=C[i];
				C[i]=C[j];
				C[j]=temp;
			}
		}
	}
	printf("\n");
		for(j=0;j<(n*2);j++)
		{
			printf("%d\t",C[j]);
		}
	return 0;
}
