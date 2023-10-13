#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * print_all - Function that prints anything
 * @format: a way to print a value
 */
void print_all(const char * const format, ...)
{
	va_list ls;
	char *str;
	int i;

	i = 0;
	va_start(ls, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(ls, int));
				break;
			case 'f':
				printf("%f", va_arg(ls, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(ls, int));
				break;
			case 's':
				str = va_arg(ls, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ls);
}
