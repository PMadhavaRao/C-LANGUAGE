#include<stdio.h>
int main()
{
char ch;
printf("enter the alphabet");
scanf("%c",&ch);
if (ch>='A' && ch<='Z')
{
printf("%cis the uppercase letter",ch);
}
else if(ch>='a' && ch<='z')
{
printf("%cis the lower case letter",ch);
}
else
{
printf("not an alphabet%c",ch);
}
}

