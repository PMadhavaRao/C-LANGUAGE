#include<stdio.h>
int main()
{
int a,i,s=0;
printf("enter a value:");
scanf("%d",&a);
for(i=1;i<a+1;i++)
{
s=s+i;
printf("the sum is%d\n",s);
}
return 0;
}


