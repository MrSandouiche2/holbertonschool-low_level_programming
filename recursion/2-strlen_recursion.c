#include "main.h"

/**
 * _strlen_recursion - Calcule la longueur d'une chaîne de caractèr
 * @s: La chaîne de caractères dt on veut calculer la longueur
 *
 * Description: Cette fonction calcule la longueur
 *
 * Return: La longueur de la chaîe de caractère
 */






int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}
