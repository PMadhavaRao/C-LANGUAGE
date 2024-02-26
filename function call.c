#include<stdio.h>
int max(m,n);
int main()
{
int a=100;
int b=200;
int big;
big=max(a,b);
printf("max value is:%d\n",big);
return 0;
}
int max(m,n)
{
int r;
if (m>n)
r=m;
else
r=n;
return r;
}
