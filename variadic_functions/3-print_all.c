#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - va print selon le format
 * @format: pointeur
 *
 * Description: va print anything
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0, j, printed = 0;
	char *str;
	const char t_args[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		for (j = 0; t_args[j]; j++)
			if (format[i] == t_args[j] && printed)
			{
				printf(", ");
				break;
			}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int)), printed = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), printed = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), printed = 1;
			break;
		case 's':
			str = va_arg(args, char *), printed = 1;
			printf("%s", str ? str : "(nil)");
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
