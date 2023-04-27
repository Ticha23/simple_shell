#include "shell.h"
/**
 * cmp_str - Compares two strings
 * @stra: String to be compared
 * @str_b: String to be compared
 * Return: 0 if are the same, > 0 if stra is greater, < 0 if str_b is greater
 */
int cmp_str(char *stra, char *str_b)
{
	int z;

	for (z = 0; stra[z] != '\0'; z++)
		;
	for (z = 0; str_b[z] != '\0'; z++)
	{
		if (stra[z] != str_b[z])
		{
			return (stra[z] - str_b[z]);
		}
	}
	return (0);
}
