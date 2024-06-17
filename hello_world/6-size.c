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
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(long int));
	printf("%zu\n", sizeof(long long int));
	printf("%zu\n", sizeof(float));
	return (0);
}
