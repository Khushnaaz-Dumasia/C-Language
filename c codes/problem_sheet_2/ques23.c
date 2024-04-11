int main()
{
	int i,n,j,k;
	printf("Enter n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=i;j<=n;j++)
		{
			printf("%d",j);
		}
		for(k=i-1;k>=1;k--)
		{
			printf("%d",n);
		}
		printf("\n");
	}
	return 0;
}