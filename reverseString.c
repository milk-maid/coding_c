#include <stdio.h>
#include <string.h>

/**
 * main - Entry Point
 *
 * Return: Always (0)
 */
int main(void)
{
	char s1[20] = "Jayanti";
	char ch;
	int i, len = 0;

	/*
	strrev(s1);
	printf("The Reversed String is : %s\n", s1);
	*/

	len = strlen(s1);
	for (i = 0; i < len / 2; i++)
	{
		ch = s1[i];
		s1[i] = s1[len - 1 - i];
		s1[len - 1 - i] = ch;
	}
	printf("The Reversed String(our Stylr) is : %s\n", s1);

	printf(" Thank You\n End Of Program\n");
	return (0);
}
