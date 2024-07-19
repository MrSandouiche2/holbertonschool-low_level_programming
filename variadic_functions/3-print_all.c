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
	unsigned int i = 0, j = 0;
	char *str;
	const char t_args[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (t_args[j])
		{
			if (format[i] == t_args[j] && i)
				printf(", ");
			j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
