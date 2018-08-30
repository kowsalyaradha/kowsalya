#include<stdio.h>
void main()
{
int i1,i2,i,flag;
scanf("%d%d",&i1,&i2);
while(i1<i2)
{
flag=0;
for(i=2;i<=i1/2;i++)
{
if(i1%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d ",i1);
++i1;
}
}
