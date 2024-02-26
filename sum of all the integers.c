#include<stdio.h>
int main()
{
int m;int sum=0;
printf("enter the numbers from range 0 to 100\n");
while(m!=-1)
{
	scanf("%d",&m);
	if(m>=0&&m<=100)
	{
		sum=sum+m;
	}
}
printf("the sum is =%d:\n",sum);
return 0;
}
