#include <stdio.h>

/**
 * main - prints alphabets in small letter
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
