#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i, j;

	for (j = 1; j <= 7; j++)
	{
		for (i = 1; i <= 5; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("End Of Program\n");
	/**
	 * for (i = 1; i <= 5; i++)
	 * {
	 * printf("*")
	 * }
	 */
	return (0);
}
