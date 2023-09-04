#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t write_result;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (fd == -1)
return (-1);

write_result = -1;

if (text_content != NULL)
{
write_result = write(fd, text_content, strlen(text_content));
}

close(fd);

if (write_result == -1)
return (-1);

return (1);
}
