#include <stdio.h>


/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char ch;

	printf("Enter an Alphabet : \n");
	scanf("%c", &ch);
	switch (ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("You just pressed a VOWEL key\n");
			break;
		default:
			printf("Why did you enter a CONSONANT\n");
	}
	printf("\n Thank You \n End of Program\n");
}
