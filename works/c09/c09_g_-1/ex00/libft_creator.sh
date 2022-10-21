rm -f libft.a
find . -name "*.c" -type f -maxdepth 1 -exec gcc -Wall -Werror -Wextra -c {} \;
ar -rc libft.a *.o
find . -name "*.o" -type f -maxdepth 1 -delete
