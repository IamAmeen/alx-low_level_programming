#include "main.h"
/**
 * _abs - function to compute absolute value of an integer
 *
 * @i: an integer
 *
 * Return: Absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
