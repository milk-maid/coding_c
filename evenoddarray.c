#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i, a[i];
	int even = 0, odd = 0;

	printf("Enter 10 random numbers: \n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	/**
	 * }
	 * decide which is Even & Odd
	 * for (i = 0; i < 10; i++)
	 * {
	 */
		if (a[i] % 2 == 0)
		{
			even = even + 1;
		} else
		{
			odd = odd + 1;
		}
	}
	printf("Even Elements Are = %d\n", even);
	printf("Odd Numbers are = %d\n", odd);
	printf("Thank You \nEnd Of Program\n");
	return (0);
}
