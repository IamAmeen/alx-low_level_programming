#include "main.c"
/**
 * _strlen : returns the lenght of a string
 * @s: integer
 * return: 
 */
int _strlen(char *s)
{
	int count = 0;
	while (*(s + count) != '\0')
		count++;
	return (count);
}
