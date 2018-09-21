#include<stdio.h>
#include<string.h>
int main()
{
int i,l,count=0,ans;
char str[30];
scanf("%[^\n]%*c",str);
l=strlen(str);
for(i=0;i<30;i++)
{
if(str[i]==''||'a-z'||'0-9')
{
count++;
}
}
ans=l-count;
printf("\n%d",ans);
return 0;
}

