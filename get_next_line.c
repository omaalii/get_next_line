/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 08:28:54 by omaali            #+#    #+#             */
/*   Updated: 2024/01/09 18:05:28 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *free_str(char **str)
{
	free(*str);
	(*str) = NULL;
	return (NULL);
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
		buffer[b_read} = '\0';
		storage = ft_strjoin(storage, buffer);
	}
	

}



