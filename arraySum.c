#include <stdio.h>


/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int marks[5], i;
	float sum = 0, avg;

	printf("Enter the scores: \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &marks[i]);
	}
	for (i = 0; i < 5; i++)
	{
		sum = sum + marks[i];
	}
	avg = sum / 5;
	printf("The sum of the scores is::: %f\n", sum);
	printf("The Average of the marks is: %f Thanks", avg);
	printf("\n Thank You \n End of Program\n");
	return (0);
}
