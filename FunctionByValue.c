#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
void value(int, int);
int main(void)
{
	int x = 5, y = 7;

	printf("x = %d, y = %d\n", x, y);
	value(x, y);
	printf("x = %d & y = %d\n", x, y);
	printf(" Thank You!!!\n End Of Program!!!\n");
}

/**
 * value - a function that takes pointer as an argumenmt
 * which makes it a call by reference
 * @p: first parameter
 * @q: second parameter
 * Return: void
 */
void value(int p, int q)
{
	p = 15;
	q = 17;
	printf("p = %d q = %d\n", p, q);
}
