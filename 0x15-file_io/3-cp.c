#include "main.h"

/**
 * main - copies the conetnet of one file into another
 * @argc: args
 * @argv: pointer
 * Return: number of letters it can read and write
 */
int main(int argc, char **argv)
{
	int file1, file2, n;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can'nt read from file %s\n", argv[1]);
		exit(98);
	}

	file2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
        while ((n = read(file1, buffer, 1024)) > 0)

		{
			if (write(file2, buffer, n) != n || file2 == -1)
				{
					dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
					exit(99);
				}
		}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file2) < 0)
	{
		dprintf(STDERR_FILENO, "eRROR: Can't clode fd %d\n", file2);
		exit(100);
	}
	if (close(file2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return (0);
}
