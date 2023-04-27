#include "shell.h"
/**
 * terminal - Verify if the input is a builtin
 * @proofs: Pointer to the array of proofs
 * @_status: Current exit status
 * Return: -1 if the command is not a builtin, 0 if it is
 */
int terminal(char **proofs, int _status)
{
	char *bashins[2] = {
		"exit",
		"env"
	};
	int gh = 0;

	while (gh < 2)
	{
		if (cmp_str(proofs[0], bashins[gh]) == 0)
			break;
		gh++;
	}
	if (gh == 2)
		return (-1);
	if (cmp_str(bashins[gh], "exit") == 0)
	{
		free(proofs[0]);
		exit(_status);
	}
	if (cmp_str(bashins[gh], "env") == 0)
	{
		if (environ == NULL)
			return (0);
		write(1, environ, 1000);
	}
	return (0);
}
