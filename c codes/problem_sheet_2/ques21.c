int main()
{
	int i,n=5,j,k,l;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		for(l=k;l<=((2*i)-1);l++)
		{
			printf("%d",l);
		}
		printf("\n");
	}
	return 0;
}
