#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int point;
	char name[] = "aodeeq's House";

	/*point = name;*/
	printf("The string stored is \"%s\"\n", name);
	printf("First Element i.e name[0] %c\n", name[0]);
	printf("name[0] address is %d\n", name[0]);
	printf("The base address is %p\n", name);
	printf(" Thank You\n End Of Program\n");
	return (0);
}
