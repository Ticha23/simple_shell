#include "shell.h"
/**
 * prints_spray - Prints numbers, used to print the error message
 * @a: number to print
 * Return: Number
 */

int prints_spray(int a)
{
	unsigned int num;
	int j = 0;

	if (a < 0)
	{
		num = -a;
		j = j + _putchar('-');
	}
	else
	{
		num = a;
	}
	if (num / 10 != '\0')
		j = j + prints_spray(num / 10);
	j = j + _putchar(num % 10 + '0');
	return (j);
}
