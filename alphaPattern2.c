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
	printf("Your Program Goes Thus:::\n");
	for (i = row; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c ", 64 + j);
		}
		printf("\n");
	}
	printf(" Thank You\n End Of Program\n");
	return (0);
}
