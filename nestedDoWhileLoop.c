#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i = 1, j = 3;

	do {
		do {
			printf("%d", j);
			j--;
		} while (j > 0);
		i++;
		printf("%d", i);
		/*1++;*/
	} while (i < 4);
	printf("End Of Program\n");
	return (0);
}
