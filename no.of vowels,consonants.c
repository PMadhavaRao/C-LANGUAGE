#include<stdio.h>
int main()
{
	char str[100];
	char *ptr;
	int cntv=0,cntc=0,space=0;
	printf("enter a string:");
	scanf("%s",&str[100]);
	cntv=cntc=0;
	while(*ptr!='\0')
	{
         if(*ptr==' ')
		 {
			 space++;
		 }
		 else if((*ptr>='a' && *ptr<='z') || (*ptr>='a' && *ptr<='z'))
		 {
			 cntc++;
		 }
		 ptr++;
		 printf("Total number of vowels:%d,consonant:%d\n",cntv,cntc);
		 return 0;
	 }
 }
	 
