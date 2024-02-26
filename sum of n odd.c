#include<stdio.h>
int main()
{
int n,s=0,i=1;
printf("enter  a number");
scanf("%d",&n);
do
{
if ((i%2)!=0)
{
s=s+i;
i=i+2;
}
else
{
break;
}
}
while(i<=n);
printf("the sum of n odd numbers is %d",s);
return 0;
}

