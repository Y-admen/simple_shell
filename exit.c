#include"main.h"
/*
 * _exit - this function will check if the input is the exit command
 *
 * @param arr - array of arguments
 * @param status - the exit status of the last command
 * @param i - the current index in the array of arguments
 * @param program_name - the name of the current program
 *
 * @return void - will exit the program if the exit command is detected
 */
void _exit(char **arr, int status, int i, char *program_name)
{
	if (_strcmp(arr[i], "exit") == 0)
	{
		char *message = program_name, *message2;

		while (*message)
		{
			_putchar(*message);
			message++;
		}

		_putchar(':');
		_putchar(' ');

		message2 = "exiting";
		while (*message2)
		{
			_putchar(*message2);
			message2++;
		}

		_putchar('\n');
		exit(status);
	}
}
