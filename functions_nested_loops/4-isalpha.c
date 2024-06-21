#include "main.h"
/**
 * _isalpha - fonction
 *
 *@c: vieux truc x2
 * Description: j'ai juste copié l'exercice d'avant et remis une fonction
 *
 *
 * Return: Always 0 (Success)
 */


int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
		return (0);
}
