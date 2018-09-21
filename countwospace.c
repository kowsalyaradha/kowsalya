#include<stdio.h>
#include<string.h>
int main()
{
int l,ans,count=0,i;
char str[20];
scanf("%[^\n]%*c",str);
l=strlen(str);
for(i=0;i<20;i++)
{
if(str[i]=='')
{
count++;
}
}
ans=l-count;
printf("\n%d",ans);
  return 0;
}
