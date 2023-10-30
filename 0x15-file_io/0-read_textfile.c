#include "main.h"

/**
 ** read_textfile - reads a text file and prints the letters
 ** @filename: filename.
 ** @letters: numbers of letters printed.
 **
 ** Return: numbers of letters printed. It fails, returns 0.
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t num_of_letters_read, num_of_letters_written;
	char *buf;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	num_of_letters_read = read(file_descriptor, buf, letters);
	num_of_letters_written = write(STDOUT_FILENO, buf, num_of_letters_read);

	close(file_descriptor);

	free(buf);
	return (num_of_letters_written);
}
