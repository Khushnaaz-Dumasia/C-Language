int main()
{
	int i,n=5,j,k,l;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(2*i-1);k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
