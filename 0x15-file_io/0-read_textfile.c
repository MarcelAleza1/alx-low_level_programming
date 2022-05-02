#include "main.h"

/**
 * read_textfile - reads a text from a file and print it to POSIX stoud
 * @filename: name of the file
 * @letters: number of letters
 * @Return: number of letters to be printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, fread, fwrite;
	char *size;

	size = malloc(sizeof(char) * letters);
	if (size == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	fread = read(file, size, letters);

	if (fread == -1)
		return (0);

	fwrite = write(STDOUT_FILENO, size, fread);
	if (fwrite == -1)
		return (0);

	close(file);
	free(size);

	return (fwrite);
}
