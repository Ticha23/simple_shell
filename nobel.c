#include "shell.h"
/**
 * verification - Verify if the first command can be executed
 * @argum: Array of entries by the user
 * Return: 0 if success, or -1 if the exe file doesn't exist
 */
int verification(char **argum)
{
	char *_path = NULL;
	char *_dup = NULL;
	char *direction_path = NULL;
	char *coman_path = NULL;
	char *exam_cph[121];
	int existing_stats = -1, lam = 0;

	_path = set_env("PATH");
	if (_path == NULL)
		return (-1);
	_dup = (_stringupa(_path));
	direction_path = strtok(_dup, ":");
	if (direction_path == NULL)
		return (-1);
	free(_path);
	while (existing_stats == -1 && direction_path != NULL)
	{
		coman_path = command_conca(direction_path, argum[0]);
		exam_cph[lam] = coman_path;
		existing_stats = exist(exam_cph[lam]);
		direction_path = strtok(NULL, ":");
		lam++;
	}
	lam--;
	free(_dup);
	grid_fring(exam_cph, lam);
	if (existing_stats == 0)
	{
		argum[0] = exam_cph[lam];
		return (0);
	}
	else
	{
		free(exam_cph[lam]);
		return (-1);
	}
}
