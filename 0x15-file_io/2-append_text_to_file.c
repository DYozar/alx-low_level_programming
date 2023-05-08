#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file to append to
 * @text_content: the text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t written_bytes = 0;
ssize_t text_len = 0;

if (filename == NULL)
return (-1);

/* Open the file for appending */
fd = open(filename, O_WRONLY | O_APPEND);
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

