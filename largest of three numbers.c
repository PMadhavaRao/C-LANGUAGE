#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three numbers");
scanf("%d %d %d",&a,&b,&c);
if (a>b && a>c)
{
printf("the largest is a");
}
else if(b>a && b>c)
{
printf("the largest number is b");
}
else
{
printf("the largest number is c");
}
return 0;
}
