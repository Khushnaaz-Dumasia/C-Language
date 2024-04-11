#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int n= atoi(argv[1]);
    if(argc>2)
    {
        printf("Enter only 1 argument");
    }
    else{
        printf("%d", isprime(n));
    }
    return 0;
}
int isprime(int n)
{
    int count=0;
    for(int i=1;i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("num is prime");
        return 0;
    }
    else{
        printf("num is not prime");
        return 1;
    }
}