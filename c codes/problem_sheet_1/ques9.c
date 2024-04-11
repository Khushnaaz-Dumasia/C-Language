
int main()
{
	float f,c;
	printf("enter tempareture(f)");
	scanf("%f",&f);
	{
		c=((f-32)*(5)/9);
		printf("Tempareture in centigrade=%.2f",c);
	}
	return 0;
}