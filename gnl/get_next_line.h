#ifndef GET_NEST_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE 32

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd);
size_t	strlen(const *str);
char	*strdup(const char *s1);
char	*strchr(const char *str, int c);
char	*strjoin(char const *s1, char const *s2);

#endif