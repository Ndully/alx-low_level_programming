#include "main.h"

/**
 * _islower - function that check lowercase character
 * @c: single letter input
 *
 * Return: Always success
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
