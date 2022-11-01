#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(sucess)
 */
int main(void)
{
	int a, i, sum = 0;

	do {
		printf("Enter a Number to Add:\n");
		scanf("%d", &a);
		if (a < 0)
		{
			printf("NEGATIVE not allowed by BELLO\n");
			continue;
		}
		sum = sum + a;
	} while (1);
	printf("Sum = %d\n", sum);
	printf("End of Program\n");
	return (0);
}
