#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - ajoute l'addition
 * @a: premier opérande
 * @b: deuxième opérande
 *
 * Return: la somme de a et b.
 */


int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - ajoute la soustraction
 * @a: premier opérande
 * @b: deuxième opérande
 *
 * Return: la somme de a et b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - ajoute la multiplication
 * @a: premier opérande
 * @b: deuxième opérande
 *
 * Return: la somme de a et b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - ajoute la division
 * @a: premier opérande
 * @b: deuxième opérande
 *
 * Return: la somme de a et b.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - ajoute modulo
 * @a: premier opérande
 * @b: deuxième opérande
 *
 * Return: la somme de a et b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
