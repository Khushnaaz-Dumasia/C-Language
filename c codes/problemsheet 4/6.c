#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int v=0, c=0, i=0;
    FILE *fp;
    fp=fopen("student.txt", "w");
    printf("Enter a string = ");
    scanf("%s", str);
    fprintf(fp,"%s",str);
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            v++;
        }
        else{
            c++;
        }
        i++;
       
    }
     printf("no of vowels=%d consonants=%d", v, c);
    fclose(fp);
    /*fp=fopen("student.txt", "r");
    for(int i=0;i!=strlen(str);i++)
    {
        fscanf(fp,"%s",str);
    }
    fclose(fp);*/
    return 0;
}
