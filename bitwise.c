#include <stdio.h>


/**
 * main: Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 10, b = 5;

	printf("Bitwise operation between a = 10 and b = 5\n");
	printf("AND &: %d\n", a & b);
	printf("OR !: %d\n", a | b);
	printf("XOR ^: %d\n", a ^ b);
	printf("NOT ~: %d\n", ~b);
	printf("a&b && b+1 !! 0 : %d\n", a & b && b + 1 || 0);
	return (0);
}
