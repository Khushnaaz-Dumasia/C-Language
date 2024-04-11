int main()
{
	int y;
	printf("enter year");
	scanf("%d",&y);
	if(y%4==0)
	{
		printf("Leap year");
	}
	else
	{
		printf("Nonleap year");
	}
	return 0;
}
