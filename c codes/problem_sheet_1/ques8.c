int main()
{
	int pop2013,pop2014,pop2015,pop2016,pop2017,pop2018;
	printf("enter population of 2013");
	scanf("%d",&pop2013);
	pop2014=pop2013+(pop2013*0.10);
	pop2015=pop2014-(pop2014*0.10);
	pop2016=pop2015+(pop2015*0.1123);
	pop2017=pop2016;
	pop2018=pop2017-(pop2017*0.042);
	{
		printf("Population of 2018 is %d",pop2018);
	}
	return 0;
}
