//Develop a Program to count the total number of digit in a number.

#include<stdio.h>
#include<conio.h>
void main()
{
	int num , count = 0;
	clrscr();

	printf("\n Enter Any Number :- ");
	scanf("%d",&num);

	while(num > 0)
	{
		count++;
		num/=10;
	}

	printf("\n Sum of Digit :- %d",count);

	getch();
}