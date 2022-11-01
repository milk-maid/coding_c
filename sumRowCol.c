#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(sucess)
 */
int main(void)
{
	int i, j, a[3][3], sumRow, sumCol;

	printf("Now Enter The Elements of The 3X3 Matric: \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}
	printf("This is Your Inputted Matrix ==>\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	/*The Sum of individual ROWS & COLUMNS*/
	for (i = 0; i < 3; i++)
	{
		sumRow = sumCol = 0;
		for (j = 0; j < 3; j++)
		{
			sumRow = sumRow + a[i][j];
			sumCol = sumCol + a[j][i];
		}
		printf("SumRow = %d, SumCol = %d\n", sumRow, sumCol);
	}
	printf(" Thank You!\n End of Program\n");
	return (0);
}
