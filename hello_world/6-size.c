/**
 * main - Entry point
 *
 * Description: 'va print le nombre de byte'
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(long int));
	printf("%lu\n", sizeof(long long int));
	printf("%lu\n", sizeof(float));
	return (0);
}
