#include<stdio.h>
#include<conio.h>

void main()
{
	int a,i=1;
	int fact=1;
	clrscr();

	printf("\n Enter Number --> ");
	scanf("%d",&a);

	while(i <= a)
	{
		fact *= i;
		i++;
	}

	printf("Factorial : %d",fact);

	getch();
}
