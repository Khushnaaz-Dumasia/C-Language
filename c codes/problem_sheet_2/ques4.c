int main()
{
	int i,n;
	printf("Enter n");
	scanf("%d",&n);
	printf("The factors of given num are :");
	for(i=1;i<n;i++)
	{
			if(n%i==0)
			{
				printf("\t%d",i);
			}
	}

	return 0;
}
