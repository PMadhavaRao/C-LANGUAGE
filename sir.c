#include<stdio.h>
int main()
{
	int r1,c1,r2,c2,i,j;
	printf("enter no.or rows in matrix1:");
	scanf("%d",&r1);
	printf("enter no.of columns");
	scanf("%d",&c1);
	printf("enter no.or rows in matrix2:");
	scanf("%d",&r2);
	printf("enter no.of columns");
	scanf("%d",&c2);
	printf("\nenter your choice");
	printf("\n+");
	printf("\n-");
	printf("\n*");
	printf("\nenter any key to exit");
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
	case '+':
	if(r1==r2 && c1==c2)
	{
		int a[r1][c1],b[r2][c2];
		printf("enter matrix A values:");
		for(i=0,i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter matrix B values:");
		for(i=0,i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		printf("the addition\n");
		for(i=0,i<r1;i++)
		{
			printf("\n");
			for(j=0;j<c1;j++)
			{
				printf"%d\t",a[i][j]+b[i][j]);
			}
		}
		else
		{
			printf("\naddition is not possible");
		}
	}
	return 0;
}
		
				
				
		
		
		
	
	

