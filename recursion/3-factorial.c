#include "main.h"

/**
 * factorial - Calcule le factoriel d'un nombre.
 * @n: Le nombre dont on veut calculer le factoriel.
 *
 * Description: Cette fonction calcule le factoriel d'un nombre
 *
 * Return: La valeur du factoriel de n
 */




int factorial(int n)
{
if (n < 0)
return (-1);

if (n <= 1)
return (1);

return (n * factorial(n - 1));
}
