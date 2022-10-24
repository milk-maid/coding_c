#include <stdio.h>


/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int a;

	printf("Enter a digit : ");
	scanf("%d", &a);
	switch (a)
	{
		case 1:
			printf("The Number You Entered is ONE\n");
			break;
		case 2:
			printf("You pressed TWO\n");
			break;
		case 3:
			printf("THREE you just entered\n");
			break;
		case 4:
			printf("FOUR you just entered\n");
			break;
		case 5:
			printf("FIVE you just entered\n");
			break;
		case 6:
			printf("SIX6 you just entered\n");
			break;
		case 7:
			printf("SEVEN7 you just entered\n");
			break;
		case 8:
			printf("EIGHT8 you just entered\n");
			break;
		default:
			printf("Thanks for your Input!\n");
	}


	printf(" Thank You \n End of Program\n");
}
