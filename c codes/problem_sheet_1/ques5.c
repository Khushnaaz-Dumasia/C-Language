#include<stdio.h>
int main()
{
	int p,n;
	float r,si;
	printf("enter P,R,N");
	scanf("%d%f%d",&p,&r,&n);
	{
		si=(float)(p*r*n)/100;
		printf("Simple intrest=%.2f",si);
	}
	return 0;
}

