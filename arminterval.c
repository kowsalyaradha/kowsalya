#include<stdio.h>
#include<math.h>
void main()
{
int num,temp1,temp2,i1,i2,i,n=0,ar=0,rem;
scanf("%d%d",&i1,&i2);
for(i=i1+1;i<i2;i++)
{
temp1=i;
temp2=i;
while(temp1!=0)
{
temp1=temp1/10;
++n;
}
while(temp2!=0)
{
rem=temp2%10;
ar=ar+pow(rem,n);
temp2=temp2/10;
}
if(ar==i)
{
printf("%d ",i);
}
n=0;
ar=0;
}
}
