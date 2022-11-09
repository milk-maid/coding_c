#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i, j;

	/*for (i = 7; i >= 0; i--)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	for (i = 0; i <= 7; i++)
	{
		for (j = 7; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf(" Thank You\nEnd Of Program\n");
	return (0);
}
