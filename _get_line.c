#include"main.h"
/*
*_get_line - get line from file
 * Parameters:
 *   - lineptr: pointer to the buffer to store the line
 *   - n:       pointer to the size of the buffer
 *   - stream: file stream from which the line will be read
 *
 * Return Value:
 *   - (ssize_t) On success, the length of the line read is returned.
 *               On failure, -1 is returned and the errno is set.
 */
ssize_t _get_line(char **lineptr, size_t *n, FILE *stream)
{
	return (getline(lineptr, n, stream));
}
