#include "main.h"

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

	file_d = open(filename, O_RDONLY);
	if (file_d == -1 || letters == 0)
		return (0);
	buf = (char *)malloc(sizeof(char) * letters);
	letters_read = read(file_d, buf, letters);
	letters_written = write(STDOUT_FILENO, buf, letters_read);
	if (letters_read != letters_written)
		return (0);
	close(file_d);
	free(buf);
	return (letters_written);
}
