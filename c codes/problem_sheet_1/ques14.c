int main()
{
	int f;
	printf("enter temperature(f)");
	scanf("%d",&f);
	if(f>40)
		{
			printf("Very hot");
		}
	else if(f>=37)
		{
			printf("Hot");
		}
	else if(f>=34)
	    {
			printf("Warm");
		}
	else
		{
			printf("Cool");
		}

	return 0;
}