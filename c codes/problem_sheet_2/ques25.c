int main()
{
	int i,n=5,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
	return 0;
}
