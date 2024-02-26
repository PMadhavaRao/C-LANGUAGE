#include<stdio.h>
int main()
{
	int n;
	printf("enter size");
	scanf("%d",&n);
	int a[n][n],b[n][n],c[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("enter a elements at a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			printf("enter b elements at b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	char op;
	printf("enter any operator(+,-,*)");
	sacnf("%c",&op);
	switch(op)
	{
		case'+':
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
	break;
	case'-':
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				c[i][j]=a[i][j]-b[i][j];
			}
		}
		break;
	case'*':
	for(int i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	break;
	default:
	printf("invalid");
	exit(0);
}
	printf("the elements of c are");
	for(int i=0;i,n;i++
	{
		for(j=0;j<n;j++)
		{
			printf("%d",c[i][j];
		}
		printf("\n");
	}
return 0;
}

		
		
		
			
