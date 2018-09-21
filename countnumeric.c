#include<stdio.h>
int main()
{
char str[20];
int i,count=0;
scanf("%[^\n]%*c",str);
for(i=0;i<20;i++)
{
if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
{
count++;
}
}
printf("\n%d",count);
return 0;
}
