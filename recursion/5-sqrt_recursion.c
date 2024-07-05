#include "main.h"
#include <stdio.h>
/**
 *_sqrt - fonction
 *_sqrt_recursion - fonction 2
 *@n: var
 *@i: var
 *
 *  Description: fonction
 *
 *  Return: le resultat
 */



int _sqrt(int n, int i);
int _sqrt_recursion(int n)

{

return (_sqrt(n, 1));
}


int _sqrt(int n, int i)
{

int sqrt = i * i;

if (sqrt > n)

return (-1);

if (sqrt == n)

return (i);

return (_sqrt(n, i + 1));
}
