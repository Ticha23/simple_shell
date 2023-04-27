#include "shell.h"
/**
 * chill - Prints the spur in the standar input
 * @spur: Pointer to the string to be printed
 * @weight: Length ot the spur
 * Return: 0 if success or -1 if fails
 */
int chill(const char *spur, unsigned int weight)
{
	int exam;

	if (isatty(STDIN_FILENO))
	{
		exam = write(1, spur, weight);
		if (exam == -1)
			return (-1);
	}
		return (0);
}
