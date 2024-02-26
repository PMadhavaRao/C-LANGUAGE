#include<stdio.h>
int main()
{
	int array[100],n,c,d,temp;
	printf("enter no of elements");
	scanf("%d",&n);
	printf("enter %d integers\n",n);
	for(c=0;c<n;c++)
	   scanf("%d",&array[c]);
	for(c=1;c<n;c++)
	{
		temp=array[c];
		for(d=c;d>0 && temp<array[d-1];d--)
		{
			array[d]=array[d-1];
		}
		array[d]=temp;
	}
	printf("the sorted list\n");
	for(c=0;c<n;c++)
	   printf("%d\n",array[c]);
	return 0;
}
	
