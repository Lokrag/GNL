/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalsadi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:29:27 by oalsadi-          #+#    #+#             */
/*   Updated: 2024/05/31 20:29:30 by oalsadi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_from_file(int fd, char *buffer)
{
	int	ret;

	ret = read(fd, buffer, BUFFER_SIZE);
	if (ret == -1)
	{
		free(buffer);
		return (NULL);
	}
	buffer[ret] = '\0';
	return (buffer);
}

char	*check_newline(char *buffer, char *line)
{
	char	*temp;

	while (strchr (buffer, '\n' == -1))
	{
		temp = strdup(line);
		free(line);
		line = strjoin(temp, buffer);
		free(temp);
	}
	return (line);
}

char	*get_next_line(int fd)
{
	char	*line;
	char	*buffer;

	buffer = (char *)malloc(BUFFER_SIZE +1);
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	buffer = read_from_file(fd, buffer);
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	line = strdup("");
	line = check_newline(buffer, line);
	free(buffer);
	return (line);
}

