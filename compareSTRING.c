#include <stdio.h>
#include <string.h>

/**
 * main - Entry Point
 *
 * Return: Always (0)
 */
int main(void)
{
	int value, flag = 0, i;
	char s1[] = "Hello";
	char s2[] = "Hellow";

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		printf("NOT SAME!!!\n");
	else
		printf("they are SAME\n");
	/*
	if (strcmp(s1, s2) == 0)
		printf("The STRINGS are SAME\n");
	else
		printf("They are NOT SAME\n");
	*/

	/*
	value = strcmp(s1, s2);
	if (value == 0)
		same;
	else
		not same;
	printf("%d\n", value);
	*/

	printf(" Thank You\n End Of Program\n");
	return (0);
}
