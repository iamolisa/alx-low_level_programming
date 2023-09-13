#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: function that prints the alphabet, in lowercase
 *followed by a new line.
 *
 *Return: On success, 1. On error, -1.
**/
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
	_putchar(letter);
	letter++;
}

_putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);
}

