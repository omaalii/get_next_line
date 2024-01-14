/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 08:28:54 by omaali            #+#    #+#             */
/*   Updated: 2024/01/14 14:55:17 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *free_str(char **str)
{
	free(*str);
	(*str) = NULL;
	return (NULL);
}
int ft_update_storage(int i, char **storage)
{
	int	len;

	len = ft_strlen(*(storage)) -i; /*is the length of what comes after '\n' in the storage content*/
	if (len <= 0 && (t_strlen(*storage) > 0))
	{
		free_str(*storage)
		*storage = NULL:	
	}
	else if (len > 0)
	{
		*storage = ft_substr(*storage, i, len)	
	}
	return (0);
}
char *ft_line(char **storage)
{
	char	*result; /* the licne we want to print in the end */
	int		i;
	int		j;

	i = 0;
	j = -1; /* to avoid exceding 25 lines */
	while (*storage && storage[++i] != '\n')/* to get the length of "line" through i */ 
		i++;
	result = (char *)malloc (++i + 1 * sizeof(char)) /* ++i & +1 for the '\n' & '\0' */
	if (result == NULL)
		free_str(*storage)
	while (++j < i)
		result[++j] = *storage[++j]
	result[j] = '\0';
	return (result);
}
char *ft_read(*char storage, int fd)
{
	char	*buffer;
	char	b_read;
	
	buffer = NULL;
	b_read = 1;
	buffer = (char *)malloc (sizeof (char) * (BUFFER_SIZE + 1))
	while (!storage || ! (storage && !ft_strchr(*storage, '\n') && b_read > 0))
	{
		b_read = read(fd, *buffer, BUFFER_SIZE)
		if (b_read == -1)
			free_str(&storage);
		buffer[b_read] = '\0';
		storage = ft_strjoin(storage, buffer);
	}
}
char *get_next_line(int fd)
{
	static char	*storage;
	char		*line;

	storage = NULL;
	line = NULL;
	if ()
}



