#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int a[] = { 10, 11, -1, 56, 67, 5, 4};
	int *p, *q;

	p = a;
	printf("The value p points to is %d\n", *p);
	printf("The address stored in p is %p\n", p);
	printf("%d %d %d\n", (*p)++, *p++, *++p);
	printf("*p now stores::: %d\n", *p);
	q = p + 3;
	printf("*q-3 is %d\n", *q - 3);
	printf("*--p+5 is %d\n", *--p + 5);
	printf("*p+*q is %d\n", *p + *q);
	return (0);
}
