#include <stdio.h>

/**
 * main - a program to print numbers from (10) to (0) using putchar
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
