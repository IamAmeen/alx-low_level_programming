#include "main.h"

/**
 * _islower - checks for lower case
 * 
 * Return: (0) success
 */
int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
