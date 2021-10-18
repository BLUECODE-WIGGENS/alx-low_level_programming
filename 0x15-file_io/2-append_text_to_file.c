#include "main.h"

/**
 * append_text_to_file - appends text at file's end.
 * @filename: The name of the file
 * @text_content: string to add 
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int file_d, write_read, i = 0;

if (filename == NULL)
return (-1);

file_d = open(filename, O_WRONLY | O_APPEND);

if (file_d == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[i])
i++;

write_read = write(file_d, text_content, i);
}
close(file_d);
if (write_read == -1)
return (-1);

return (1);
}
