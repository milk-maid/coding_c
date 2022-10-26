#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int a, b, add, sub, mul, div;
	char operator;

	printf("What Operation do you want to perform?\nEnter either +, -, / or *\n");
	scanf("%c", &operator);
	printf("Input the two operands now!\n");
	scanf("%d\n %d", &a, &b);
	switch (operator)
	{
		case '+':
			add = a + b;
			printf("%d + %d = %d\n", a, b, add);
			break;
		case '-':
			sub = a - b;
			printf("%d - %d = %d\n", a, b, sub);
			break;
		case '*':
			mul = a * b;
			printf("%d * %d = %d\n", a, b, mul);
			break;
		case '/':
			div = a / b;
			printf("%d / %d = %d\n", a, b, div);
			break;
		default:
			printf("Please Enter a Valid Operator\n");
	}
	printf("End of Program\n");
}
