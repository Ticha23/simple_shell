#include "shell.h"
/**
 * _stringupa - Duplicates a string
 * @string: String to be duplicated
 * Return: Pointer to the duplicated string
 */
char *_stringupa(char *string)
{
	unsigned int g, yen;
	char *dupli;

	if (string == NULL)
		return (NULL);

	for (yen = 0; string[yen] != '\0'; yen++)
		;
	dupli = (char *) malloc(sizeof(char) * (yen + 1));
	if (dupli == NULL)
		return (NULL);
	for (g = 0; g <= yen; g++)
	{
		dupli[g] = string[g];
	}
	return (dupli);
}
