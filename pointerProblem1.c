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
	q = &a[0] + 3;
	printf("The value P points to is::: %d\n", *p);
	printf("The address stored in p is::: %p\n", p);
	printf("The value Q points to is::: %d\n", *q);
	printf("The address stored in q(a+3) is::: %p\n", q);
	printf("%d %d %d\n", (*p)++, (*p)++, *(++p));
	printf("p now stores::: %d\n", *p);
	printf("*p++::: %d\n", (*p)++);
	printf("*p++::: %d\n", (*p)++);
	printf("p now stores %d\n", *p);
	q--;
	printf("(*(q+2))-- gives::: %d\n", (*(q + 2))--);
	printf("*q now stores::: %d\n", *q);
	printf("*(p+2)-2 ::: %d\n", *(p + 2) - 2);
	printf("*(p++ - 2)-1 ::: %d\n", *(p++ - 2) - 1);
	return (0);
}
