#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entrée du programme
 * @argc: Nombre d'arguments
 * @argv: Tableau d'arguments
 *
 * Return: 0 en cas de succès, 98, 99 ou 100 en cas d'erreur
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
