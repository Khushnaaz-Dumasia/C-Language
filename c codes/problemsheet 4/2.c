#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    FILE *fp, *temp;
    char ch;
    if(argc>3 || argc<0)
    {
        printf("Enter 2 valid arguments only");
    }
    fp=fopen(argv[1], "r");
    temp=fopen(argv[2], "w");
    if(fp=NULL)
    {
        printf("\n press any key to exit");
        exit(-1);
    }
    if(temp=NULL)
    {
        printf("\n press any key to exit");
        exit(-1);
    }
    while((ch=fgetc(fp))!=EOF)
    {
        fputc(ch, temp);
    }
    printf("\nContent copied");
    return 0;
}