#include<stdio.h>
int main()
{
int i,j,n,c;
print("enter the range");
scanf("%d",&n);
printf("the prime numbers \n");
for(i=1;i<=n,i++)
{
c=0
for(j=1;j<=n;j++)
{
if(i%j==0)
c++;
}
if (c==2)
printf("%d",i);
}
return 0;
}
