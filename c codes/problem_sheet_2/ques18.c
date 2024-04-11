int main()
{
	int i,n=5,j,k,l;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(l=1;l<=i-1;l++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
