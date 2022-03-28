#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: arguments to copy.
 * @argv: pointer array of arguments.
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_from, close_to, _read = 1024, _write;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	doesnt_exist(fd_from, argv[1], -1, -1);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	cant_create(fd_to, argv[2], fd_from, -1);
	while (_read == 1024)
	{
		_read = read(fd_from, buff, 1024);
		doesnt_exist(_read, argv[1], fd_from, fd_to);
		_write = write(fd_to, buff, _read);
		if (_write != _read)
		{
			_write = -1;
		}
		cant_create(_write, argv[2], fd_from, fd_to);
	}
	close_from = close(fd_from);
	close_to = close(fd_to);
	cant_close(close_from, fd_from);
	cant_close(close_to, fd_to);
	return (0);
}

/**
 * doesnt_exist - checks if file_from exists.
 * @aux_check: checks if the value of the arg is -1.
 * @filename: name of the file.
 * @fd_from: new file descriptor or -1 if error.
 * @fd_to: new file descriptor or -1 if error.
 */
void doesnt_exist(ssize_t aux_check, char *filename, int fd_from, int fd_to)
{
	if (aux_check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		if (fd_from != -1)
		{
			close(fd_from);
		}
		if (fd_to != -1)
		{
			close(fd_to);
		}
		exit(98);
	}
}

/**
 * cant_create - checks if cant write or create file_to.
 * @aux_check: checks if the value of the arg is -1.
 * @filename: name of the file.
 * @fd_from: new file descriptor or -1 if error.
 * @fd_to: new file descriptor or -1 if error.
 */
void cant_create(ssize_t aux_check, char *filename, int fd_from, int fd_to)
{
	if (aux_check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		if (fd_from != -1)
		{
			close(fd_from);
		}
		if (fd_to != -1)
		{
			close(fd_to);
		}
		exit(99);
	}
}

/**
 * cant_close - checks if file descriptor cant close.
 * @aux_check: checks if the value of the arg is -1.
 * @fd_value: new file descriptor or -1 if error.
 */
void cant_close(int aux_check, int fd_value)
{
	if (aux_check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
		exit(100);
	}
}

