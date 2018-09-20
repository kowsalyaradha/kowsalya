#include<iostream.h>
using namespace std;
int main()
{
int a[10],n,i,temp;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
temp=a[0];
for(i=0;i<n;i++)
{
if(temp<a[i])
{
temp=a[i];
}
}
cout>>temp;
}
