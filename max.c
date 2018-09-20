#include<stdio.h>
void main()
{
  int a[10],n,i,temp;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
     }
  temp=a[0];
  for(i=1;i,n;i++)
  {
    if(temp<a[i])
    {
      temp=a[i];
    }
  }
  printf("\n%d",temp);
}
