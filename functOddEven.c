#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int oddeven(int);
int main(void)
{
	int a;

	printf("Enter any number\n");
	scanf("%d", &a);
	oddeven(a);
	printf(" Thank You!!!\n End Of Program!!!\n");
	return (0);
}

/**
 * oddeven - a function that test whether a number is odd or even
 * which takes it a call by value
 * @p: the parameter
 * Return: void
 */
int oddeven(int p)
{
	int flag = 0;

	if (p == 0)
		printf("You Entered '0', Pls input a larger value\n");
	else if (p % 2 == 0)
		printf("You Entered an EVEN NUMBER\n");
	else
		printf("Your Input is an ODD NUMBER\n");
	return (0);
}
