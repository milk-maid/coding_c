#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i, j, space, row;

	printf("Enter The Number Of Row:\n");
	scanf("%d", &row);
	printf("Here You Go:::\n");
	for (i = row; i >= 1; i--)
	{
		for (space = 1; space <= (row - i); space++)
		printf(" ");
		for (j = 1; j <= ((i * 2) - 1); j++)
			printf("*");
		printf("\n");
	}
	printf(" Thank You\nEnd Of Program\n");
	return (0);
}
