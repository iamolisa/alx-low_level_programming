#include "main.h"

/**
 * _strlen - return string length
 * @s: string to return length of
 * Return: return an int,length of s
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
