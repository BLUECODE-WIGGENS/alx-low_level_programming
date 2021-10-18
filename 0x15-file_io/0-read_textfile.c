#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: The name of the file.
 * @letters: the number of letters to read and print
 *
 * Return: returns the actual number of letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int file_d1, file_d2;
size_t readed;

char *buffer = malloc(sizeof(char) * letters);

if (buffer == NULL)
return (0);

if (filename == NULL)
return (0);

file_d1 = open(filename, O_RDONLY, 0600);
if (file_d1 == -1)
{
close(file_d1);
return (0);
}
readed = read(file_d1, buffer, letters);
buffer[letters] = '\0';
close (file_d1);

file_d2 = write(STDOUT_FILENO, buffer, readed);
if (file_d2 == -1)
return (0);

return (file_d2);
}
