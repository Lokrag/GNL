/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalsadi- <oalsadi-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:10:57 by oalsadi-          #+#    #+#             */
/*   Updated: 2024/05/18 18:10:57 by oalsadi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t  strlen(const *str)
{
    size_t  i;

    i = 0;
    while (str[i])
        i++;
}

// Path: get_next_line.c
// Compare this snippet from get_next_line.h:

char    *strdup(const char *s1)
{
    size_t  len;
    char    *dup;

    len = strlen(s1) + 1;
    dup = (char *)malloc(len);
    if (dup == NULL)
    {
        return (NULL);
    }
    while (len--)
    {
        dup[len] = s1[len];
    }
    return (dup);
}

char    *strchr(const char *str, int c)
{
    unsigned char   a:
    int				 b;
}

strjoin;
strchr;
strcpy;
