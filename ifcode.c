#include <stdio.h>


/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int age;

	printf("Enter your age : ");
	scanf("%d", &age);
	if (age > 20)
	{
		printf("You can participate\n");
		printf("Start taking responsibility\n");
	}
	printf("So, youre are just %d years old\n", age);
	return (0);
}
