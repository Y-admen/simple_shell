#include"main.h"

/**
 * show_error - function shows an error message if there is an issue.
 * @argv: The array of command line arguments.
 * @i:The index of the command line argument with the issue.
 * @arr: The array containing the command line arguments.
 * @err_msg: The error message to display.
 */
void show_error(char *argv[], int i, char arr[], char *err_msg)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	int j = 0;
	int start = 0;

	for (j = 0; err_msg[j] != '\0'; j++)
		_putchar(err_msg[j]);

	while ((read = _get_line(&line, &len, stdin)) != -1)
	{
		if (i >= start && i <= start + 5)
		{
			for (j = 0; j < read; j++)
			_putchar(line[j]);
		}
	}
	start += 6;
	free(line);
}
