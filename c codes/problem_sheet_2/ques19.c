int main()
{
	int i,n,j,k,l;
	printf("Enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=i;k<=(2*i)-1;k++)
		{
			printf("%d",k);
		}
		for(l=k-2;l>=i;l--)
		{
			printf("%d",l);
		}
		printf("\n");
	}
	return 0;
}
