#include"main.h"
/**
 * _execve - Function to execute a command with a new process
 * @command: Pointer to a string that contains the command to execute
 * @command_and_argu: Point to arr of strings(the command and its arguments)
 * @status: Pointer to an integer that will store the status of the command
 *
 * Return: None
 */
void _execve(char *command, char **command_and_argu, int *status)
{
	pid_t child_id = fork();

	switch (child_id)
	{
	case -1:
		perror("");
		break;
	case 0:
		if (execve(command, command_and_argu, environ) == -1)
		{
			*status = 2;
			perror("");
			exit(2);
		}
		break;

	default:
		if (wait(status) == -1)
		{
			perror("");
		}
		if (*status != 0)
			*status = 2;
		break;
	}
}
