#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - a function that produces output according to a format.
 * @format: format string
 *
 * Return: number of characters printed (excluding null byte)
 *
 */

int _printf(const char *format, ...)
{
	va_list args;
	char c;
	int total_chars = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				putchar(c);
				total_chars++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				if (str == NULL)
					str = "(null)";
				puts(str);
				total_chars += strlen(str);
			}
			else if (*format == '%')
			{
				putchar('%');
				total_chars++;
			}
			else
			{
				putchar('%');
				putchar(*format);
				total_chars += 2;
			}
		}
		else
		{
			putchar(*format);
			total_chars++;
		}
		format++;
	}

	va_end(args);
	return (total_chars);
}
