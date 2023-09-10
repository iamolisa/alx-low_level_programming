#include <stdio.h>
#include <time.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 4;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d\n" n is positive);
	}
	else if (n == 0)
	{
		printf("%d\n" n is zeron);
	}
	else
	{
		printf("%d\n" n is negative);
	}
	return (0);
}

