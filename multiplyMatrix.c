#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i, j, k, sum, a[3][3], b[3][2], mul[3][2];

	printf("Elements Of The 1st Matrix a[3][3]:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter Items of Matrix2 b[3][2]:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("First Matrix a[3][3] is ==> \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("Second Matrix : b[3][2] ==> \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	/*The MULTIPLIATION CORNER gangan*/
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			sum = 0;
			for (k = 0; k < 3; k++)
			{
				sum = sum + a[i][k] * b[k][j];
				mul[i][j] = sum;
			}
		}
	}
	printf("The MULTIPLICATION \"[3][2]\" of a * b :::\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\t", mul[i][j]);
		}
		printf("\n");
	}
	printf(" Thank You!!!\n End of Program!!!\n");
	return (0);
}
