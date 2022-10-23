#include <stdio.h>
#include <fcntl.h>
#include <stdbool.h>

#include "../includes/display_file.h"
// #include "display_file.c"
// #include "string_utils.c"

bool    parse_arguments(int argc, char **argv)
{
    if (argc < 2)
        str_write(ERR, MSG_ERR_NO_FILE);
    else if (argc > 2)
        str_write(ERR, MSG_ERR_TOO_MANY_ARGS);
    else
        if (!display_file(argv[1]))
            str_write(ERR, MSG_ERR_CANNOT_READ);
        else
            return (true);
    return (false);
}

int main(int argc, char **argv)
{
    if (parse_arguments(argc, argv))
        return (0);
    else
        return (1);
}
