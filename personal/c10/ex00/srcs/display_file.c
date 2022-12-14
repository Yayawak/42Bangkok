#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#include "../includes/display_file.h"

bool display_file(char *path)
{
	int 			file_descriptor;
	unsigned int 	byte_read;
	char 			*buffer[BUFFER_SIZE];

	file_descriptor = open(path, O_RDONLY);
	if (file_descriptor < 0)
		return (false);
	// printf("FD value %d\n", file_descriptor);

	// byte_read = read(file_descriptor, buffer, BUFFER_SIZE)
	while ((byte_read = read(file_descriptor, buffer, BUFFER_SIZE)) > 0)
	{
		// printf("byte read char : %c\n\n", byte_read);
		// printf("byte read code : %d\n", byte_read);
		if (byte_read == (unsigned int)(-1))
		{
			return (false);
		}
		write(1, &buffer[0], byte_read);
	}
	close(file_descriptor);
	return (true);
}

// int	main(int ac, char **av)
// {
// 	display_file("text.a");
// }
