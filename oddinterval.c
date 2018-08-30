#include<stdio.h>
void main()
{
int i1,i2,i;
scanf("%d%d",&i1,&i2);
for(i=i1+1;i<i2;i++)
{
if(i%2!=0)
{
printf("%d ",i);
}
}
}
