#include<stdio.h>
void main()
{
int n,on,rn=0,rem;
scanf("%d",&n);
on=n;
while(n!=0)
{
rem=n%10;
rn=rn*10+rem;
n=n/10;
}
if(on==rn)
{
printf("yes");
}
else
{
printf("no");
}
}
