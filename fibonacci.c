#include<stdio.h>
int main()
{
int n,i,c,a=1,b=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
}
return 0;
}
