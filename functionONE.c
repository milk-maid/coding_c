#include <stdio.h>

/**
 * sum - add two integers
 * @a: first.
 * @b: second.
 * Return: Sum of a and b
 */

int sum(int a, int b)
{
	return (a + b);
}

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int x, y, add;

	printf("Enter Two Numbers To Add\n");
	scanf("%d %d", &x, &y);
	add = sum(x, y);
	printf("The sum of %d + %d = %d\n", x, y, add);
	printf(" Thank You!!! \n End Of Program*!!!\n");
	return (0);
}
