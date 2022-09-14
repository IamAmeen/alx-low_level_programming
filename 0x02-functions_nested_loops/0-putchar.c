#include "main.h"
/**
 * main - program that prints putchar
 *
 * Return: Always (0) Success
 */

int main (void)
{
	char *i = "_putchar";
	while (*i)
	{
		putchar(*i);
		i++;
	}
	putchar('\n');
	return (0);
}
