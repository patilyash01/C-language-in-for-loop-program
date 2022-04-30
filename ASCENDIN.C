#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,b;
	clrscr();
	printf("\n ENTER THE STARTING NUMBER:");
	scanf("%d",&a);
	printf("\n ENTER THE ENDING NUMBER :");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		printf("\t\n%d",i);
	}
	for(i=a;i>=b;i--)
	{
		printf("\t\n%d",i);
	}
	getch();
}
