int main()
{
	int a,b,c,d,e,per;
	printf("enter marks of 5 subjects");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	{
	per=((a+b+c+d+e)*100)/500;
	}
	if(per>=60)
		{
			printf("First division");
		}
	else if(per>=50)
		{
			printf("Second division");
		}
	else if(per>=40)
	    {
			printf("Third division");
		}
	else
		{
			printf("Fail");
		}

	return 0;
}
