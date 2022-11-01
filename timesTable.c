#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int number, i, a;

	printf("Enter the number you want to see the times table\n");
	scanf("%d", &a);
	for (i = 0; i <= 15; i++)
	{
		number = a * i;
		printf("%d x %d = %d\n", a, i, number);
	}
	printf("End Of Program\n");
}
