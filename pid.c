#include "shell.h"
/**
 * exec - Creates a new child process,
 * executes a command and wait for the child process
 * to update the status
 * @arguments: Array of inputs by the user
 * Return: 0 if success
 */
int exec(char **arguments)
{
	pid_t ray = 0;
	int state = 0, execute_stat = 0;

	ray = fork();
	if (ray == -1)
		chill("failed\n", 7);
	else if (ray == 0)
	{
		execute_stat = execve(arguments[0], arguments, environ);
		if (execute_stat == -1)
		{
			execute_stat = 126;
			perror("hsh");
			exit(execute_stat);
		}
		exit(0);
	}
	else
		wait(&state);
	execute_stat = WEXITSTATUS(state);
	return (execute_stat);
	}
