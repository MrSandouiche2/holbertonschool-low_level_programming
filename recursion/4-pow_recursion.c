#include "main.h"

/**
 *  _pow_recursion - Calcule la valeur de x avec la puissance de y
 *  @x: La valeur a multiplier
 *  @y: Le nombre de fois ou la valeur doit etre multipli
 *
 *  Description: Cette fonction calcule de maniÃ¨re rÃ©cursi
 *
 *  Return: La valeur de x avec la puissance de y
 */







int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}
