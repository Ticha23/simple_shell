#include "shell.h"
/**
 * prints_error - Prints error message when a command is not found
 * @argue: array of args typed by the user
 * @counts: Times that the shell has been executed
 * Return: Exit status
 */
int prints_error(char **argue, int counts)
{
	char *imode_shel = "hsh";
	char *non_i_mode_shel = "./hsh";

	if (isatty(STDIN_FILENO))
		write(2, imode_shel, 3);
	else
	{
		write(2, non_i_mode_shel, 5);
	}
	write(2, ": ", 2);
	prints_spray(counts);
	write(2, ": ", 2);
	write(2, argue[0], len_str(argue[0]));
	write(2, ": not found\n", 12);
	return (127);
}
