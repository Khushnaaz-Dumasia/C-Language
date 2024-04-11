int main()
{
	int i,n,j,k=1,l;
	printf("Enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=1;j--)
		{
			if(i==j)
			{
				printf("*");
			}
			else
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}

	return 0;
}
