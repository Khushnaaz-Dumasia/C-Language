int main()
{
	int i,divident,n1,cnt=0;
	printf("Enter divident");
	scanf("%d",&divident);
	printf("Enter divisor");
	scanf("%d",&n1);
	if(n1==0)
		printf("Error");
	else
	{
		for(i=1;divident>n1;i++)
		{
			divident=divident-n1;
			cnt++;
		}
		printf("Divident=%d & remainder=%d",cnt,divident);
	}
	return 0;
}
