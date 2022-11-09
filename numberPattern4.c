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
	for (i = row; i >= 0; i--)
	{
		for (j = i; j >= 0; j--)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	printf(" Thank You\n End Of Program\n");
	return (0);
}
