#include "main.h"

/**
 * append_text_to_file - function that creates a file.
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int char_count = 0, fd;

if (filename == NULL)
return (-1);

if (text_content == NULL)
text_content = "";

while (text_content[char_count] != '\0')
{
char_count++;
}

fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);

write(fd, text_content, char_count);

return (1);
}
