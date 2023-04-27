#include "shell.h"
/**
 * set_env - Get the content of a variable
 * @variable: Variable to extract from environ
 * Return: Pointer to the content of a variable, or NULL if fails
 */
char *set_env(char *variable)
{
	int ch = 0;
	const char arr[] = "=";
	char *env_token, *envdupli, *env_token_dupli;

	if (variable != NULL)
	{
		if (environ == NULL)
			return (NULL);
		envdupli = _stringupa(environ[ch]);
		while (envdupli != NULL)
		{
			env_token = strtok(envdupli, arr);
			if (cmp_str(env_token, variable) == 0)
			{
				env_token = strtok(NULL, arr);
				/**printf("%s\n", token);*/
				env_token_dupli = _stringupa(env_token);
				free(envdupli);
				return (env_token_dupli);
			}
			ch++;
			free(envdupli);
			envdupli = _stringupa(environ[ch]);
		}
	}
	return (NULL);
}
