int main()
{
	int i,n=300,j;
	char ch;
	for(i=1;i<=n;i++)
	{
		ch='A';
		for(j=1;j<=i;j++)
		{
			printf("%c",i+64);
		}
		printf("\n");
	}
	return 0;
}
