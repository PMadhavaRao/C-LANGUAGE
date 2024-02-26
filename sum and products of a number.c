#include<stdio.h>
int main()
{
int p=1,s=0,m,a;
printf("enter number");
scanf("%d",&m);
do
{
a=m%10;
m=m/10;
s=s+a;
p=p*a;
}
while(m!=0);
printf("sum is %d\n",s);
printf("multiplication is %d",p);
return 0;
}
