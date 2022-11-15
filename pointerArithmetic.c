#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int a[] = {0, 1, -1, 10, 11};
	int *p = &a[0];
	int *q = &a[4];
	int d;

	printf("The Value Stored in *p is %d\n", *p);
	printf("The Value Stored in *q is %d\n", *q);
	d = p - q;
	printf("The ans of p-q is %d\n", d);
	*q = 25;
	printf("if *q = 25 then *q is %d\n", *q);
	d = q - p;
	printf("Now the alue of d=q-p is %d\n", d);
	*p = 27;
	printf("*p=27, now *p is %d\n", *p);
	q = q - 3;
	printf("q-3! this will tamper wth the pointer! now *q is %d\n", *q);
	printf("q now stores this address ::: %p\n", q);
	p = p + 3;
	printf("p+3! this will tamper wth the pointer! now *p is %d\n", *p);
	printf("p now stores : %p\n", p);
	d = p - q;
	printf("now p-q will give us %d\n", d);
	return (0);
}
