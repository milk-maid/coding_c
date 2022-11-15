#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int a = 12;
	int *p = &a;
	int **q = &p;
	int ***r = &q;

	printf("a = %d %d %d\n", a, *p, ***r);
	printf("%p\n", q);
	return (0);
}
