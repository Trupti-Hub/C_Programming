#include<stdio.h>
#include<conio.h>

void main()
{

	float unit;
	clrscr();

	printf("\n Enter Unit --> ");
	scanf("%f",&unit);

	if(unit <= 50)
	{
		printf("Unit Charge : %f",unit * 0.50);
	}
	else if(unit <= 150)
	{
		float tot = 50 * 0.50;
		printf("Unit Charge : %f",tot + (unit - 50) * 0.75);
	}
	else if(unit <= 250)
	{
		float tot50 = 50 * 0.50;
		float tot150 = 150 * 0.75;
		printf("Unit Charge : %f",((tot50 + tot150 + (unit-150)) * 1.20));
	}
	else
	{
		float tot50 = 50 * 0.50;
		float tot150 = 150 * 0.75;
		float tot = 250 * 1.20;
		printf("Unit Charge : %f",((tot50 + tot150 + tot + (unit-250)) * 1.50));
	}

	getch();

}

