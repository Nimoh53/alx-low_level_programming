#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file;
	ssize_t ff;
	ssize_t ma;
	ssize_t wr;

	ff = open(filename, O_RDONLY);
	if (ff == -1)
		return (0);
	file = malloc(sizeof(char) * letters);
	ma = read(ff, file, letters);
	wr = write(STDOUT_FILENO, file, ma);

	free(file);
	close(ff);
	return (wr);
}
