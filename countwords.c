#include<stdio.h>
int main()
{
int i,count=0;
char str[20];
scanf("%[^\n]%*c",str);
for(i=0;i<20;i++)
{
if(str[i]==' ')
{
count++;
}
}
printf("\n%d",count+1);
return 0;
}




