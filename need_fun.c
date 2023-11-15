#include "main.h"

/**
 * search_for_env - copy string in heap
 * @name: string
 *
 * Return: string.
 */
int search_for_env(const char *name)
{
	int i = 0;
	char *env_copy = NULL, *token = NULL;

	while (environ[i])
	{
		env_copy = strdup(environ[i]), token = _strtok(env_copy, "=");
		if (_strcmp(token, name))
		{
			free(env_copy);
			return (i);
		}
		free(env_copy);
		++i;
	}
	return (i);
}

/**
 * _get_env - copy string in heap
 * @name: string
 *
 * Return: string.
 */
char *_get_env(const char *name)
{
	int env_indx = search_for_env(name);
	char *env_copy = NULL, *env_val = NULL;

	if (!environ[env_indx])
		return (NULL);
	env_copy = _strdup(environ[env_indx]);
	_strtok(env_copy, "=");
	env_val = _strdup(_strtok(NULL, "="));
	free(env_copy);
	return (env_val);
}
