#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a file with the given name and writes the given text
 * to it
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t written_bytes = 0;
ssize_t text_len = 0;

if (filename == NULL)
return (-1);

/* Open the file for writing */
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd < 0)
return (-1);

/* Write the text to the file, if any */
if (text_content != NULL)
{
/* Compute the length of the text */
while (text_content[text_len])
text_len++;

/* Write the text to the file */
written_bytes = write(fd, text_content, text_len);
if (written_bytes < text_len)
{
close(fd);
return (-1);
}
}

/* Close the file and return success */
close(fd);
return (1);
}

