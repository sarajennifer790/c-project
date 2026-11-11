#include<stdio.h>
#include<conio.h>
int main()
{
FILE *fp;
int ch;
char name[3000];
fp = fopen("FEEDBACK.txt","w");

if ( fp==NULL)
{
printf("file opening failed\n");
return 1;
}

fprintf(fp,"Feedback of C programming\n");
fprintf(fp,"1:Difficulty in code execution\n");
fprintf(fp,"2:Difficulty in solving error\n");
fprintf(fp,"3:Need latest compiler\n");
fprintf(fp,"4:Difficult to  understand the logic in leetcode\n");
fprintf(fp,"5:Need hints to understand logic in leetcode\n");
printf("Data written successfully\n");
fclose(fp);

fp = fopen("FEEDBACK.txt","a");
if(fp== NULL)
{
printf("File cannot be opened\n");
return 1;
}
fprintf(fp,"Feedback of C Trainer\n");
fprintf(fp,"1:Need a bit more understandable,easier explanation instead of repeating\n");
fprintf(fp,"2:Otherwise, the method of teaching is actually good \n");
fprintf(fp,"3:Need more guidance and help in solving leetcode problems\n");
fprintf(fp,"4:Could explain certain concepts more slowly\n");
fprintf(fp,"5:Could give more explanation about the logic while debugging\n");
printf("\nData appended successfully\n");
fclose(fp);

fp = fopen("FEEDBACK.txt","r");
if(fp== NULL)
{
printf("Error in file opening\n");
getch();
return 1;
}
printf("\n DISPLAYING TOTAL FILE CONTENTS \n");
while((ch = fgetc(fp)) !=EOF)
{
putchar(ch);
}
fclose(fp);

printf("\nPress any key to return to the edit page\n");
getch();
return 0;
}

