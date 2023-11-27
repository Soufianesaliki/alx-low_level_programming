#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: pointer to the file
 * @text_content: a pointer to the content of the file
 * Return:	1 if success
 *		-1 if filename is NULL
 *		-1 if the file does not exist
 *		-1 if we do not have the required permissions to write the file
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, len;
	ssize_t letters_written;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;
		letters_written = write(file_d, text_content, len);
		if (letters_written == -1 || letters_written != len)
		{
			close(file_d);
			return (-1);
		}
	}
	close(file_d);
	return (1);
}
