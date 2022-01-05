#include<stdio.h>
#include<conio.h>
void main()
{
	int n,c,o,p=0;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		o=n%10;
		p=o+(p*10);
		n=n/10;
	}
		if(c==p)
		printf("\nnumber is palindrome");
		else
		printf("\nnumber is not palindrome");
		getch();
		}
