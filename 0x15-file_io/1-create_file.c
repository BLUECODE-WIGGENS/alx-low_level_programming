#include "main.h"

/**
 * create_file - creates a file
 * @filename: The name of the file
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
int file_d, write_read, i = 0;

file_d = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
if (file_d == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[i])
i++;

write_read = write(file_d, text_content, i);
if (write_read == -1)
return (-1);
}
close(file_d);
}
