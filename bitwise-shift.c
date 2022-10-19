#include <stdio.h>


/**
 * main -Entry Point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int a = 10, b, c, d, e, f, g, h, i, j;

	b = a << 2;
	c = a << 4;
	d = a >> 2;
	e = a >> 4;
	f = ~a;
	g = ~5;
	h = ~10;
	printf("a << 2: %d\n", b);
	printf("a << 4: %d\n", c);
	printf("a >> 2: %d\n", d);
	printf("a >> 4: %d\n", e);
	printf("~a: %d\n", f);
	printf("~5: %d\n", g);
	printf("~10: %d\n", h);
	return (0);
}
