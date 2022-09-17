#include "main.h"

/**
 * _isdigit - check if c is a digit
 * return: 1 or 0
 * @c: character
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
