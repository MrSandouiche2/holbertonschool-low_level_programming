#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: va print avec des virgules et espace
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int i;

for (i = '0'; i <= '9'; i++)
{
putchar(i);

if
(i != '9')

putchar(',');
putchar(' ');
putchar('\n');
}


	return (0);
}
