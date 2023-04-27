#include "shell.h"
/**
 * last_leave - Free the memory for the last execution
 * @start: Input typed by the user
 */
void last_leave(char *start)
{
	if (isatty(STDIN_FILENO))
	{
		_putchar('\n');
		free(start);
	}
	if (!isatty(STDIN_FILENO))
		free(start);
}
