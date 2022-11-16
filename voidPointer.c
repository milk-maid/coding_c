#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int a = 5;
	float b = 1.11;
	char c = 'j';
	void *vp;

	vp = &a;
	printf("int typecasted::: %d\n", *(int *)vp);
	vp = &b;
	printf("float typecasted::: %f\n", *(float *)vp);
	vp = &c;
	printf("char typecasted::: %c\n", *(char *)vp);
	printf(" Thank You!!!\n End Of Program!!!\n");
	return (0);
}
