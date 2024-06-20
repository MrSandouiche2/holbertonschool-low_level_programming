#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: va print les nombres en utilisant l'ascii
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 48; num <= 57; num++)
{
putchar(num);
}
putchar('\n');

return (0);
}
