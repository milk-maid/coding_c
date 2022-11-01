#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(sucess)
 */
int main(void)
{
	int a, sum = 0;

	while (1)
	{
		printf("Enter a Number to Add:\n");
		scanf("%d", &a);
		if (a < 0)
			break;
		sum = sum + a;
	}
	printf("Sum = %d\n", sum);
	printf("End of Program\n");
	return (0);
}
