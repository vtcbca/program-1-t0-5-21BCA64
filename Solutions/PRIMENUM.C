#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,c=0;
	clrscr();
	printf("Enter any number");
	scanf("%d",&n);
	for(i=2;i>=n;i++)
	i=1;
	while(i<n)
	{
		if(n%i==0)
		c=1;
		break;
	}
		if(c==1)
		printf("\nnumber is not prime");
		else
		printf("\nnumber is prime");
		getch();
		}
