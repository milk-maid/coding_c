#include <stdio.h>


/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int ch;

	printf("press a key: ");
	scanf("%d", &ch);
	printf("Your Input Is %c == %d!!!\n\n", ch, ch);
	if (ch >= 'A' && ch <= 'Z')
		printf("You entered an CAPITAL letter\n");
	else if (ch >= 'a' && ch <= 'z')
		printf("You entered a SMALL letter\n");
	else if (ch >= '0' && ch <= '9')
		printf("You entered a FIGURE\n");
	else
		printf("WoW!, What a special character\n");
	printf("End Of Program\n");
	return (0);
}
