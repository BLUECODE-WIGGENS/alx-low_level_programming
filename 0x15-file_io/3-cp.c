#include "main.h"

/**
  * main - Entry point
  * @argc: The argument count
  * @argv: The argument vector
  *
  * Return: ...
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - ...
  * @filr_from: file source
  * @file_to: file destination
  *
  * Return: ...
  */
void copy_file(const char *file_from, const char *file_to)
{
	int file_d1, file_d2, read_write;
	char buffer[1024];

	file_d1 = open(file_from, O_RDONLY);
	if (!file_from || file_d1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	file_d2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read_write = read(file_d1, buffer, 1024)) > 0)
	{
		if (write(file_d2, buffer, read_write) != read_write || file_d2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (read_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(file_d1)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d1);
		exit(100);
	}

	if (close(file_d2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d2);
		exit(100);
    }

}
