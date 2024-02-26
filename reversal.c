#include<stdio.h>()
int main()
{
int m,p,c;
printf("enter marks\n");
scanf("%d%d%d",&m,&p,&c);
if(m>=65 && p>=55 && c>=50 || m+p+c>=180)
{
printf("person is eligible for admission");
}
else
{
printf("person is not eligible for admission");
}
return 0;
}
