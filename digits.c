#include<stdio.h>
#include<math.h>
void main()
{
long num;
int count =0;
scanf("%ld",&num);
count=log10(num)+1;
printf("\n%d",count);
}
