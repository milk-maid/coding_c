#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int a = 10, b = 17;
	int *p = &a, *q = &b, c = *q;
	*p = 20;

	printf("value of a = %d\n", a);
	printf("a = %d\n", *p);
	printf("address of a = %p\n", &a);
	printf("address of a = %p\n", p);
	printf("address of p = %p\n", &p);
	printf("c = %d\n", c);
	printf("a = %d\n", a);
	printf("p is now: %p\n", p);
	/*printf("p is now(with/%/d): %d\n", p);*/
	printf(" Thank You!\n End Of Program!!!\n");
	return (0);
}
