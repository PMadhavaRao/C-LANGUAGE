#include<stdio.h>
int main()
{
	int array[100],search,c,n,first,last,middle;
	printf("enter no of elements\n");
	scanf("%d",&n);
	printf("enter %d integers\n",n);
	for(c=0;c<n;c++)
	  scanf("%d",&array[c]);
	printf("enter a number to search\n");
	scanf("%d",&search);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(array[middle]<search)
		    first=middle+1;
		else if(array[middle]==search)	
		{
			printf("%d is present at location %d\n",search,middle+1);
			break;
		}
		else
		{
		   last=middle-1;
	    }
		   middle=(first+last)/2;
	}
	if(first>last)
	     printf("%d isn't present in the array\n",search);
	return 0;
}
		
