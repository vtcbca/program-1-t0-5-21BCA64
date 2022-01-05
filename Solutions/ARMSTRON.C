#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,c=0,t;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		a=n%10;
		c=c+a*a*a;
		n=n/10;
	}
	if(c==t)
		printf("\nnumber is armstrong number");
	else
		printf("\nnumber is not armstrong number");
	getch();
}
