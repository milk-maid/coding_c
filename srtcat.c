#include <stdio.h>
#include <string.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char s1[25] = "Saboor";
	char s2[20] = "Mogaji";
	int len1, len2, i = 0;

	/*strcat(s1, s2);*/
	len1 = strlen(s1);
	len2 = strlen(s2);
	while (i <= len2)
	{
		s1[len1 + i] = s2[i];
		i++;
	}
	printf("The Concatenated String is : %s\n", s1);
	strncat(s1, s2, 3);
	printf("The \"STRNCAT\" with 2 is : %s\n", s1);
	printf(" Thank You\n End Of Program\n");
	return (0);
}
