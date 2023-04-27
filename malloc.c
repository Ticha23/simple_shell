#include "shell.h"
/**
 *grid_fring - Free the allocated memory used in the last excercise
 *@grind: pointer to grind
 *@width: Heigth of the grind
 */

void grid_fring(char **grind, int width)
{
	int q = 0;

	if (grind == NULL)
	{
		return;
	}

	while (q < width)
	{
		free(grind[q]);
		q++;
	}
}
