
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: va print l'alphabet sans e ni q
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char i;

for (i = 'a'; i <= 'z'; i++)
{
	if (i == 'e' || i == 'q')
		continue;
	{
}
	putchar(i);
}
putchar('\n');


return (0);
}



