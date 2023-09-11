#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet in reverse,
 *              followed by a new line, using putchar.
 *
 * Return: Always 0 (Success)
**/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
