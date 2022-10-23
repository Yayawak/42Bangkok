#include "../includes/cat.h"
// #include "cat.c"
// #include "string_utils.c"

int main(int argc, char **argv)
{
    if (argc < 2)
        stdin_loop();
    else
        if (!cat(argv, argc - 1, 1))
            return (1);
    return (0);
}
