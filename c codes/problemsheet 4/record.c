#include<stdio.h>
#include<stdlib.h>
struct student{
    int rollno;
    char name[10];
    float per;
}stud;
int read()
{
    FILE *fp;
    fp=fopen("stud.dat", "r");
    fread(&stud,sizeof(stud), 1, fp);
    printf("\n%d %s %f",stud.rollno, stud.name, stud.per);
    int count=0;
    while(fread(&stud,sizeof(stud),1,fp))
    {
        count++;
    }
    printf("\n%d", count);
    fclose(fp);
    return count;
}
int main()
{
    FILE *fp1;
    fp1=fopen("stud.dat","w");
    printf("Enter roll no name per ");
    scanf("%d %s %f", &stud.rollno, stud.name, &stud.per);
   fwrite(&stud,sizeof(stud),1,fp1);
   fclose(fp1);
   read();
   return 0;
}