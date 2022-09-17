#include "main.h"

/**
 * _isdigit - check if c is a digit
 * return: 1  if c is digit or 0 if letter
 * @c: character
 */

int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
