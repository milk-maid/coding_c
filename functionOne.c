#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int sum(void)
{
	int a, b, sum = 0;

	printf("Enter any two numbers?\n");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
}
int main(void)
{
	printf(" WELCOME/\n");
	sum();
	printf("Hello\n");
	sum();
	printf(" Thank You!!! \n End Of Program*!!!\n");
	return (0);
}
