#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i, j;

	for (i = 0, j = 1 ; i <= 7 && j < 5 ; i++, j++)
	{
		printf("i = %d, j = %d\n", i, j);
	}
	printf("End Of Program\n");
}
