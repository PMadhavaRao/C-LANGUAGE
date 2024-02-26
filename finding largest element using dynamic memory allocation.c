#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,m,n=5,i;
	printf("enter number of elements:%d\n",n);
	p=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;++i)
	{
		scanf("%d",&p[i]);
	}
	printf("the elements of the array are:\n");
	for(i=0;i<n;++i)
	{
		printf("%d\n",p[i]);
	}
	m=p[0];
	for(i=0;i<n;++i)
	{
		if(p[i]>m)
		{
			m=p[i];
		}
	}
	printf("the largest element is %d",m);
	return 0;
}


