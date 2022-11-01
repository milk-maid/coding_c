#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int arr1[5], arr2[5], sumArr[5], i;

	printf("Enter the elements of array1[5] : \n");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr1[i]);
	printf("Input the items of arr2[5] now : \n");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr2[i]);
	/*Adding arr1 + arr2 & Printing the values*/
	for (i = 0; i < 5; i++)
	{
		sumArr[i] = arr1[i] + arr2[i];
		printf("SumArray Element at index %d is = %d\n", i, sumArr[i]);
		printf("i.e %d + %d = %d!!!\n", arr1[i], arr2[i], sumArr[i]);
	}
	printf(" Thank You@!!!\n End Of Program! \n");
	return (0);
}

