include<stdio.h>
int fact(int n);#
int main()
{
int n;
printf("enter a number:");
scanf("%d",&n);
printf("factorial of is %d",fact(n));
return 0;
}
int fact(int n)
{
if(n>=1)
   
   return n*fact(n-1);
else
   return 1;
}































