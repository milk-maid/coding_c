#include <stdio.h>


/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int a, b, sum, x;

	printf("Enter any two integers\n");
	x = scanf("%d\n %d\n", &a, &b);
	sum = a + b;
	printf("sum of %d and %d is %d\n", a, b, sum);
	printf("scanf is %d\n", x);
	printf("a= %d, b= %d, sum= %d\n", a, b, sum);
	return (0);
}
