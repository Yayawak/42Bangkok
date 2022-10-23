#include <stdio.h>
#include <libgen.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <stdbool.h>

#include "../includes/cat.h"

void    show_error(char *executable, char *path)
{
    if (errno == 0)
        return ;
    str_write(ERR, basename(executable));
    str_write(ERR, ": ");
    str_write(ERR, path);
    str_write(ERR, ": ");
    str_write(ERR, strerror(errno));
    str_write(ERR, "\n");
    errno = 0;
}

void    do_cat(char *executable, char *path, int fd)
{
    unsigned int    byte_read;
    char            buffer[BUFFER_SIZE];

    while ((byte_read = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        if (errno != 0)
        {
            show_error(executable, path);
            break ;
        }
        write(OUT, &buffer[0], byte_read);
    }
    if (fd > 2)
        close(fd);
}

void    stdin_loop(void)
{
    do_cat(NULL, NULL, 0);
}

bool    cat(char **paths, int count, int offset)
{
    bool    result;
    int     fd;
    int     idx;
    char    *path;

    result = true;
    idx = offset;
    while (idx < (count + offset))
    {
        path = paths[idx];
        fd = open(path, O_RDONLY);
        if (fd < 0)
        {
            show_error(paths[0], path);
            result = false;
        }
        else
            do_cat(paths[0], path, fd);
        idx++;
    }
    return (result);
}
