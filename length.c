#include "shell.h"
/**
 * len_str - Sizes the length of a strng
 * @strng: String to be sized
 * Return: The length ot the strng
 */

int len_str(const char *strng)
{
	int height = 0;

	if (strng == NULL)
		return (0);

	while (strng[height] != '\0')
		height++;
	return (height);
}
