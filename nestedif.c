#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int age, salary;

	printf("Enter your Papa's Age then Salary : ");
	scanf("%d\n, %d\n", &age, &salary);
	if (age > 50)
	{
		if (salary < 60000)
		{
			salary += 10000;
			printf("Your new salary is %d\n", salary);
		}
		else
		{
			salary += 5000;
			printf("Your salary will now be %d\n", salary);
		}
	}
	else
	{
		salary += 3000;
		printf("You should now be getting %d\n", salary);
	}
	printf("End of Program\n");
	return (0);
}
