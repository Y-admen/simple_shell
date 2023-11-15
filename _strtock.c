#include "main.h"
/*
 * _strtock - Parse a string into tokens, str is modified 
 * to return each subsequent token.
 * Parameters:
 * char *str - Pointer to the string to be parsed
 * const char *delimit - Pointer to the string of delimi char
 *
 * Return Value:
 * Pointer to the first character of a token or NULL 
 */
int _strtock(char *str, const char *delimit)
{
	return (strtock(str, delimit));
}
