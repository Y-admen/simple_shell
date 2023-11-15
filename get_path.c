#include"main.h"
/*
*    Determines if the given path is an absolute path.
*    Input:
*        - path: A null-terminated string representing the file path
*    Output:
*        - Returns 1 if the path is absolute, otherwise 0
*/
int is_absolute_path(const char *path)
{
	return (path[0] == '/');
}

/*
*  *get_path - takes a command string and returns the path to the exe file.
*  The path is extracted from the environment variable PATH.
*   Input:
*       - command: A null-terminated string representing the command
*   Output:
*       - Returns a pointer to the path string if the command is found
*/
char *get_path(char *command)
{
	char *env_path, *dir, *path, *path, *dir, *env_path;

	if (is_absolute_path(command))
	{
		return (command);
	}
	env_path = _get_env("PATH");
	dir = _strtok(env_path, ":");
	while (dir != NULL)
	{
		path = malloc(sizeof(char) * (_strlen(dir) + _strlen(command) + 2));
		_strcpy(path, dir);
		_strcat(path, "/");
		_strcat(path, command);
		_strcat(path, "\0");
	if (access(path, F_OK | X_OK) == 0)
	{
		return (path);
	}
	free(path);
	dir = _strtok(NULL, ":");
	}

	return (NULL);
}
