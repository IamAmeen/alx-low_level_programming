#include "main.h"
/**
 * print_last_digit - program to print last digit of a number
 *  
 *  Return: value of the last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-1 + 48);
		return (-1);
	}
	else
	{
		_putchar(1 + 48);
		return (1);
	}
}
