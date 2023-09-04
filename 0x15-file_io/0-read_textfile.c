#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: pointer to file
 * @letters: readable size
 * Return:	number of letters printed
 *		0 if file not opened or read
 *		0 if filename is NULL
 *		0 if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_d, letters_read, letters_written;
	char *buf;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1 || letters == 0)
		return (0);
	buf = (char *)malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	letters_read = read(file_d, buf, letters);
	letters_written = write(STDOUT_FILENO, buf, letters_read);
	close(file_d);
	free(buf);
	return (letters_written);
}
