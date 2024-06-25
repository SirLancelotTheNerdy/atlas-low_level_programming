#include "variadic_functions.h"
/**
 * print_all - prints all.
 *
 * @format: list of types of arguments passed to function.
 */
void print_all(const char * const format, ...)
{
	int index;
	char *string;
	char *separator = "";
	va_list arguments;

	va_start(arguments, format);
	index = 0;

	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arguments, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arguments, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arguments, double));
					break;
				case 's':
					string = va_arg(arguments, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					index++;
					continue;
			}
			separator = ", ";
			index++;
		}
	}
	printf("\n");
	va_end(arguments);
}
