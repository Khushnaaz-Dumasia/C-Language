#include<stdio.h>
#include<stdlib.h>
struct student{
    int rollno;
    char name[10];
    float per;
}stud;
void read()
{
    FILE *fp;
    fp=fopen("stud.txt", "r");
    fread(&stud,sizeof(stud), 1, fp);
    int count=0;
    while(fread(&stud,sizeof(stud),1,fp)!='\0')
    {
        printf("%d%s%f\n",stud.rollno,stud.name,stud.per);
        count++;
    }
    printf("\n%d", count);
    fclose(fp);
}
int main()
{
    FILE *fp1;
    fp1=fopen("stud.txt","a");
    printf("Enter roll no name per ");
    scanf("%d %s %f", &stud.rollno, stud.name, &stud.per);
   fwrite(&stud,sizeof(stud),1,fp1);
   fclose(fp1);
   read();
   return 0;
}
