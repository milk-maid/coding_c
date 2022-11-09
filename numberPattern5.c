#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i, j, row;

	printf("Enter The Number Of Rows You Want: \n");
	scanf("%d", &row);
	printf("Here You Go:::\n");
	for (i = 0; i <= row; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	printf(" Thank You\n End Of Program\n");
	return (0);
}
