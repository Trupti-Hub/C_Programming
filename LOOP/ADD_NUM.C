#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i=1;
	int add=0;
	clrscr();

	printf("\n Enter Number --> ");
	scanf("%d",&a);

	while(i <= a)
	{
		add += i;
		i++;
	}

	printf("Addition of Number : %d",add);

	getch();
}
