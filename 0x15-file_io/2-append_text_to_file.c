#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: a pointer to the name of the file
 * @text_content: the String to add to the end of the file
 * Return: If the function fails or filename is NULL - -1
 *         If the file does not exist the user lacks write permissions - -1
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int O, W, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	O = open(filename, O_WRONLY | O_APPEND);
	W = write(O, text_content, len);

	if (O == -1 || W == -1)
		return (-1);

	close(O);
	return (1);
}
