#include "main.h"
/*
 * process_env_var - process the environment variable array.
 *
 * @arr: Pointer to the environment variable array
 * @status: The status code indicating whether to remove the
 * environment variable from the array
 * @Return: Pointer to the modified environment variable array
 */
char **process_env_var(char **arr, int status)
{
	int i = 0;

	while (arr[i] != NULL)
	{
	if (arr[i][0] == '$' && arr[i][1] != '\0')
	{
		switch (arr[i][1])
		{
		case '?':
			arr[i] = change_to_status(arr[i], status);
			break;
		case '$':
			arr[i] = change_to_pid(arr[i]);
			break;
		default:
			arr[i] = change_to_env_var(arr[i]);
			break;
		}
	}
	++i;
	}
	return (arr);
}
