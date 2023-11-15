#include"main.h"
/*
 * remove_comment -Function to remove comments from the string.
 *
 * @str : Pointer to the string from which comments are to be removed
 * @Return : Point to the first character of string without comments
 */
char remove_comment(char *str)
{
	int i = 0;

	while ((str)[i] != '\0')
	{
		if ((str)[i] == '#')
		{
			if (i == 0 || (str)[i - 1] == ' ')
			{
				(str)[i] = '\0';
				break;
			}
		}
		i++;
	}
	return (str);
}
