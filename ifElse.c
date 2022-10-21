#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
    int age;

    printf("Enter your Fiancè'Fiancè's age : ");
    scanf("%d", &age);
    if (age > 25 && age < 45)
    {
        printf("Lets have an affair, Since you're %d years old\n", age);
        printf("Hope you're single?\n");
    }
    else
    {
        printf("Your %d years of age will not allow me\n", age);
        printf("You are either too small for me or too old\n");
    }
    printf("Out If-Else Statememt\n Thanks\n");
    return (0);
}
