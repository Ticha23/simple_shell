#include "shell.h"
/**
 * accept - Fill an array with every input
 * @ingress: String with the input
 * @claims: Array to be filled
 * Return: Length of the array
 */

int accept(char *ingress, char **claims)
{
	int i = 0;
	char *options, *aux = ingress, *comand;

	comand = strtok(ingress, "\n\t\r ");
	claims[i] = comand;
	while (aux != NULL)
	{
		++i;
		options = strtok(NULL, "\n\t\r ");
		aux = options;
		claims[i] = options;
	}
	claims[i] = NULL;
	return (i);
}
