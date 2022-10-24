#include <stdio.h>


/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int n1, n2, n3;

	printf("Enter Any Three Numbers ::: \n");
	scanf("%d %d %d", &n1, &n2, &n3);
	/*printf("Your Input Is %c == %d!!!\n\n", ch, ch);*/
	if (n1 > n2)
		if (n1 > n3)
			printf("%d is greatest of all(n1)\n", n1);
		else
			printf("%d is the greatest(n3)\n", n3);
	else
		if (n2 > n3)
			printf("%d is greatest(n2)\n", n2);
		else
			printf("%d is the greatest(n3)\"\n", n3);
	printf("End Of Program\n");
	return (0);
}
