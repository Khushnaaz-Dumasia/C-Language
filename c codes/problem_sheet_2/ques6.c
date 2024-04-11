int main()
{
	int n,r,cnt=0;
	printf("Enter N");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		cnt=cnt+1;
		n=n/10;
	}
	printf("Count num of digits are %d",cnt);
	return 0;
}
