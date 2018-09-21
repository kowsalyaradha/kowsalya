#include<stdio.h>
int main()
{
  int a[10],i,temp;
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  temp=a[0];
  for(i=1;i<10;i++)
  {
    if(temp<a[i])
    {
      temp=a[i];
    }
  }
  printf("\n%d",temp);
return 0;
}
