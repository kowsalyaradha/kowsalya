#include<stdio.h>
void main()
{
int i,n,k,p=1;
scanf("%d%d",&n,&k);
for(i=1;i<=k;i++)
{
p=p*n;
}
printf("\n%d",p);
}
