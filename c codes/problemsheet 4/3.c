#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int n=atoi(argv[1]);
    //int n;
    printf("Enter a number = ");
    scanf("%d", &n);
    if(argc>2)
    {
        printf("Enter only 1 argument");
    }
    else{
        printf("Factorial of the number=%d", factorial(n));
    }
    return 0;
}
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }

}