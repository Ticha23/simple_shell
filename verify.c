#include "shell.h"
/**
 * exist - Verify if a file exist
 * @pathhero: path to the file
 * Return: 0 if the file exist or -1 if not
 */
int exist(char *pathhero)
{
	int exist_stattrh;

	exist_stattrh = (open(pathhero, O_RDONLY));
	if (exist_stattrh != -1)
	{
		close(exist_stattrh);
		return (0);
	}
	else
		return (-1);
}
