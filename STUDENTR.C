#include<stdio.h>
struct student
{
char name[20];
int rollno;
char contactno[15];
char branch[20];
char place[20];
char dream[30];
};
void read (struct student s[],int n);
void write (struct student s[],int n);
int main ()
{
struct student s[15];
int n;
printf("Enter number of students : ");
scanf("%d",&n);
read(s,n);
write(s,n);
return 0;
}
void read(struct student s[],int n)
{
int i;
for(i=0;i<n;i++);
{
printf("\nDETAILS OF STUDENTS%s\n",i+1);
printf("Enter Name: ");
scanf("%s",&s[i].name);
printf("Enter Roll number: ");
scanf("%d",&s[i].rollno);
printf("Enter Branch:");
scanf("%s",&s[i].branch);
printf("Enter contact number:");
scanf("%s",&s[i].contactno);
printf("Enter place:");
scanf("%s",&s[i].place);
printf("Enter dream: ");
scanf("%s",&s[i].dream);
}
}
void write(struct student s[],int n)
{
int i;
printf("\n------STUDENT DETAILS------\n");
for(i=0;i<n;i++);
{
printf("\nstudent%d\n",i+1);

printf("Name:%s\n",s[i].name);
printf("Roll.no:%d\n",s[i].rollno);
printf("Branch:%s\n",s[i].branch);
printf("Contact Number:%s\n",s[i].contactno);
printf("Place:%s\n",s[i].place);
printf("Dream:%s\n",s[i].dream);
}
}