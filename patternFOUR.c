#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i, j, row;

	printf("Enter The Number Of Row:\n");
	scanf("%d", &row);
	printf("Here You Go:::\n");
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= row; j++)
		{
			if ((i + j) <= row)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	printf(" Thank You\nEnd Of Program\n");
	return (0);
}
