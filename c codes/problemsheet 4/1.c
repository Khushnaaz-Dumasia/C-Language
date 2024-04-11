#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    fp=fopen(argv[1], "r");
    printf("\nProgram name is %s", argv[0]);
    if(argc<2)
    {
        printf("\nNo arguments passed");
    }
    else{
        printf("\nargument passed is %s", argv[1]);
    }
    fclose(fp);
    return 0;

}