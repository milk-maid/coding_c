#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int a = 10, b;

	b = (a++, ++a, a >> 2);
	printf("a is 10 & (a++, ++a, a>>2): %d\n", b);
	printf("a is now : %d\n", a);
	return (0);
}
