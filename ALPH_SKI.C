//Develop a program that print all alphabets from 'A' to 'Z' by skipping 3
//alphabets using a do-while loop.

#include<stdio.h>
#include<conio.h>
void main()
{
	char ab = 'a';
	clrscr();

	do
	{
		printf("%c ",ab);
		ab += 4;
	}while(ab <= 'z');

	getch();
}