#include <stdio.h>


/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int a[5], i, bf;

	printf("Enter the values of the INT array\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("The Inputs ==> \n");
	for (i = 0; i <= 4; i++)
	{
		printf("data item stored at %d is ::: %d\n", i, a[i]);
	}
	printf("The Inputs in REVERSE ORDER===> \n");
	for (i = 4; i >= 0; i--)
	{
		printf("At index %d we have array item::: %d stored\n", i, a[i]);
	}


	printf("%p\n", a);
	/**
	 * printf("%p\n", a[0]);
	 * printf("%p\n", a[1]);
	 * printf("%p\n", a[2]);
	 */
	printf("%d\n", a[2]);
	printf("%d\n", a[0]);
	printf("\n Thank You \n End of Program\n");
	return (0);
}
