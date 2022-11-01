#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int j = 0, i = 0;

	while (j <= 7)
	{
		i = 1;
		while (i <= 5)
		{
			printf("*");
			i++;
		}
		printf("\n");
		j++;
	}
	printf("End Of Program\n");
	return (0);
}
