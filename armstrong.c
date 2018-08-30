#include<stdio.h>
#include<math.h>
void main()
{
int num,on,ar=0;n=0;rem;
scanf("%d",&num);
on=num;
while(on!=0)
{
on/=10;
++n;
}
on=num;
while(on!=0)
{
rem=on%10;
ar+=pow(rem,n);
on/=10;
}
if(ar==on)
{
printf("yes");
}
else
{
printf("no");
}
}
