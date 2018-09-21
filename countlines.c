#include<stdio.h>
int main()
{
char str[30];
int i,count=0;
scanf("%[^\n]%*c",str);
for(i=0;i<30;i++)
{
if(str[i]=='.')
{
count++;
}
}
printf("\n%d",count+1);
return 0;
}
