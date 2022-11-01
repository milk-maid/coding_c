#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i, j, a[2][3], b[3][2] = {100, 200, 300, 400, 500, 600};

	printf("Enter the elements of the Matrix:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}
	printf("Your Matrix is ==> \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	printf("Your Matrix TRANSPOSED :::\n");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 2; i++)
		{
			printf("%d\t", a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");
	}
	printf("transpose stored in another 3x2 :::\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf(" Thank You!\n End Of Program!!!\n");
	return (0);
}
