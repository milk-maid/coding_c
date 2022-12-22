#include <stdio.h>

/**
 * main - Entry Point
 *
 *
 * Return: Always 0
 */
int main(void)
{
	char a = 32;
	int i;

	printf("a = 32 === %c\n", a);
	printf("32 = %c\n", 32);
	for (i = 32; i <= 70; i++)
	{
		printf("%d = %c\n", i, i);
	}
	printf("%lu\n", sizeof(char));
	printf(" Thnak You !!!\n End Of Program !!!\n");
	return (0);
}
