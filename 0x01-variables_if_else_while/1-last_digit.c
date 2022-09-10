#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Returns the last digit in numbers
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n%10 > 5)
	{
		printf ("Last digit of"/n, n "is"/n, n%10 "and is greater than 5"/n, n)
	}
	else if (n%10 == 0)
	{
		printf ("Last digit of"/n, n "is"/n, n%10 "and is 0"/n, n)
	}
	else
	{
		printf ("Last digit of"/n, n "is"/n, n%10 "and is less than 6 and not 0"/n, n)
	{
	return (0);
}
