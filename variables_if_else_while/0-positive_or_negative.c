#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'permet de print un nombre et dire si il est + - ou 0
 *
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	/* your code goes there */
	return (0);
}
