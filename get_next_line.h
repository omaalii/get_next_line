/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:13:36 by omaali            #+#    #+#             */
/*   Updated: 2024/01/16 17:53:27 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H

# include "ft_get_next_line.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 19
# endif

char		*get_next_line(int fd);
char		*ft_read(char *storage, int fd);
char		*ft_line(char **storage);
int			ft_update_storage(int i, char **storage);
char		*free_str(char **str);
char		*ft_substr(char const *str, unsigned int start, size_t len);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
char		*ft_strchr(const char *s, int c);
char		*ft_strjoin(const char *s1, const char *s2);

#endif
