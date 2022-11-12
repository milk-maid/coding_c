#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main _ Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char s1[40];
	int i;

	printf("Enter The String You Wanna Convert NOW:::\n");
	scanf("%s", s1);
	/*fgets(s1);*/
	/*strlwr(s1);*/
	/*tolower(s1);*/
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] >= 'A' && s1[i] <= 'Z')
			s1[i] = s1[i] + 32;
	}
	printf("The LOWERCASED String is = %s\n", s1);
	printf(" Thank You***\n End Of Program!!!\n");
	return (0);
}
