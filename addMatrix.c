#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i, j, a[2][3], b[2][3], add[2][3];

	printf("Input The First Matrix ::: \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter The SECOND Matrix ::: \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("The First Matrix is==> \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("The Second Matrix is ==> \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf("The Matrices SUM:::==> \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			add[i][j] = a[i][j] + b[i][j];
			printf("%d\t", add[i][j]);
		}
		printf("\n");
	}
	printf(" Thank You!!!\n End of Program\n");
	return (0);
}
