#include <stdio.h>

/**
 * main - entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char str[] = "welcomesback to Ogun";
	char *ptr = str;

	printf("%c\n", *ptr);
	printf("%c\n", *(ptr++ + 1));
	printf("%c\n", *((ptr-- + 5) - 1) + 3);
	printf("%c\n", *(++ptr + 10) - 32);
	printf("%c, %c, %c\n", *ptr, *++ptr, *--ptr);
	return (0);
}
