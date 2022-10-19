#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char ch;

	printf("A program that gets character from the standard input");
	ch = getchar();
	printf("char: %c\n", ch);
	printf("ASCII value of ch: %d\n", ch);
	return (0);
}
