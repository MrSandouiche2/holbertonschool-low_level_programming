#include "main.h"
/**
 * more_numbers - fonction
 * Description: ça print les nombres mais 10 fois
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
int line, num;

for (line = 0; line < 10; line++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
