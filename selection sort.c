#include<stdio.h>
int main()
{
	int array[100],n,c,d,min,temp;
	printf("enter no of elements");
	scanf("%d",&n);
	printf("enter %d integers\n",n);
	for(c=0;c<n;c++)
	   scanf("%d",&array[c]);
	for(c=0;c<n;c++)
	{
		min=c;
		for(d=c+1;d<n;d++)
		{
			if(array[d]<array[min])
			min=d;
		}
		temp=array[c];
		array[c]=array[min];
		array[min]=temp;
	}
	printf("the sorted list\n");
	for(c=0;c<n;c++)
	   printf("%d\n",array[c]);
	return 0;
}
	

