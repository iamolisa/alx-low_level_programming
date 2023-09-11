#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single digit number of base 10 from 0
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
	printf("%d", digit);
	}

	printf("\n");

	return (0);
}
