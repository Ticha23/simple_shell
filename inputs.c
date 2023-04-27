#include "shell.h"
/**
 * command_conca - Concatenates an input with paths in global variable PATH
 * @dir_pathname: directory string to be append with the command
 * @comand: comand to be concatenated with the directory
 * Return: Buffer to concatenated path
 */
char *command_conca(char *dir_pathname, char *comand)
{
	int l, r = 0, lenz, lenf;
	char *command_path = NULL;

	if (dir_pathname == NULL || comand == NULL)
		return (NULL);

	lenz = len_str(dir_pathname);
	lenf = len_str(comand);
	command_path = malloc(lenz + lenf + 2);
	if (command_path == NULL)
		return (NULL);
	for (l = 0; dir_pathname[l] != '\0'; l++)
	{
		command_path[l] = dir_pathname[l];
	}
	if (dir_pathname[l - 1] != '/')
	{
		command_path[l] = '/';
		l++;
	}
	while (comand[r] != '\0')
	{
		command_path[l + r] = comand[r];
		r++;
	}
	command_path[l + r] = '\0';
	return (command_path);
}
