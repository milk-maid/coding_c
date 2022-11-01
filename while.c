#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char ch = ';';

	while (ch)
	{
		printf("%c; ", ch);
		ch++;
	}
	printf("End Of Program\n");
	return (0);
}
