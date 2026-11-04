#include<stdio.h>
int main()
{
char buffer[500];
FILE *fp;
fp = fopen("FEEDBACK.txt","w");
if ( fp==NULL)
{
printf("file opening failed\n");
return 0;
}

fprintf(fp,"Feedback of C programming\n");
fprintf(fp,"1:Difficulty in code execution\n");
fprintf(fp,"2:Difficulty in solving error\n");
fprintf(fp,"3:Need latest compiler\n");
fprintf(fp,"4:Difficult to  understand the logic in leetcode\n");
fprintf(fp,"5:Need hints to understand logic in leetcode\n");
printf("Data written successfully\n");

fp = fopen("FEEDBACK.txt","a");

fprintf(fp,"Feedback of C Trainer\n");
fprintf(fp,"1:Need a bit more understandable,easier explanation instead of repeating\n");
fprintf(fp,"2:Otherwise, the method of teaching is actually good \n");
fprintf(fp,"3:Need more guidance and help in solving leetcode problems\n");
fprintf(fp,"4:Could explain certain concepts more slowly\n");
fprintf(fp,"5:Could give more explanation about the logic while debugging\n");
printf("Data appended successfully\n");

fp = fopen("FEEDBACK.txt","r");
while (fgets(buffer,sizeof(buffer),fp)!=NULL)
{
printf("%s",buffer);
}
fclose(fp);
return 0;
}



