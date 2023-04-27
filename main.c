#include "shell.h"
/**
 * main - This is a simple shell created by
 * for ALX Team Project
 * Return: 0 if success
 */
int main(void)
{
	ssize_t bytered = 0;
	size_t buffersize = 0;
	char *adjorn = NULL, *adjust[20];
	int cont = 1, stat = 0, exist_lt = 0, exit = 0, built = 0;

	chill("$ ", 2);
	bytered = getline(&adjorn, &buffersize, stdin);
	while (bytered != -1)
	{
		if (*adjorn != '\n')
		{
			accept(adjorn, adjust);
			if (adjust[0] != NULL)
			{
				exist_lt = exist(adjust[0]);
				if (exist_lt != 0)
				{
					stat = verification(adjust);
					if (stat == 0)
						exit = exec(adjust), free(adjorn), free(*adjust);
					else
					{
					built = terminal(adjust, exit);
					if (built != 0)
						exit = prints_error(adjust, cont), free(adjorn);
					}
				}
				else
					exit = exec(adjust), free(adjorn);
			}
			else
				free(adjorn);
		}
		else if (*adjorn == '\n')
			free(adjorn);
		adjorn = NULL, cont++;
		chill("$ ", 2), bytered = getline(&adjorn, &buffersize, stdin);
	}
	last_leave(adjorn);
	return (exit);
}
