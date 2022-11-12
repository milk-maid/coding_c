#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i, j, row;

	printf("Enter The Number Of Rows you want:::\n");
	scanf("%d", &row);
	printf("Here is your program==>\n");
	/*FIRST PART*/
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	/*SECOND PART*/
	for (i = 1; i <= row; i++)
	{
		for (j = (row - 1); j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf(" Thank You!!!\n End Of Program\n");
	return (0);
}
