#include <stdio.h>
#include <string.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int length = 0, i;
	char name[30];

	printf("Enter Your Fullname:");
	fgets(name);
	/*gets(name);*/
	/*scanf("%s", name);*/
	/*length = strlen(name);*/
	for (i = 0; name[i] != '\0'; i++)
		length++;
	puts(name);
	printf("The String Length is : %d\n", length);
	printf(" Thank You\n End Of Program\n");
	return (0);
}
