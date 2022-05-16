#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int e = 0, f, g = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		f = 0;
		while (t_arg[j])
		{
			if (format[e] == t_arg[f] && g)
			{
				printf(", ");
				break;
			} f++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), g = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), g = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), g = 1;
			break;
		case 's':
			str = va_arg(valist, char *), g = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} e++;
	}
	printf("\n"), va_end(valist);
}
