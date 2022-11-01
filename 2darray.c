#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int a[2][3], i, j, sum = 0;

	printf("Enter the items of the 2Darray : \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	/*Printing the items of the array with */
	printf("The Matrix is ==> \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
			sum = sum + a[i][j];
		}
		printf("\n");
	}
	printf("Sum of the Elements = %d\n", sum);
	printf(" Thank You!!!\n End Of Program!!! \n");
	return (0);
}
