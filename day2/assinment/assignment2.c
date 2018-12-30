//observe the following program to identify the difference between 4 as integer and 4 as chararacter
#include<stdio.h>
#include<conio.h>
int main (void)
{
	int n=4;
	char c='4';
	n=n+5;
	c=c+5;
	printf ("integer = %d",n);
	printf ("\n character = %d",c);
	getch () ;
	return 0;
}
