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
int let;

for (num = 48; num <= 57; num++)
putchar(num);


for (let = 97; let <= 102; let++)
putchar(let);



putchar('\n');

return (0);
}
