#include "main.h"

/**
 * read_textfile - reads a text file prints it to
 * stdout
 * @filename: name of file to read
 * @letters: number of letters it should read
 * Return: no of letters it could read or print or 0
 */

ssize_t read_textfile(const char *filename,
size_t letters)
{
int fd, rd, wr;
char *buf;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

buf = malloc(letters);

if (buf == NULL)
{
free(buf);
return (0);
}

rd = read(fd, buf, letters);
if (rd == -1)
return (0);

wr = write(STDOUT_FILENO, buf, rd);
if (wr == -1)
return (0);

close(fd);
return (wr);
}
