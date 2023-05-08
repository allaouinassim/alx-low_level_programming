#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output
 * @filename: text file Being read 
 * @letters: The number of letters to be read
 * Return: O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t O, R, W;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	O = open(filename, O_RDONLY);
	R = read(o, buff, letters);
	W = write(STDOUT_FILENO, buff, r);

	if (O == -1 || R == -1 || W == -1 || W != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(O);
	return (W);
}
