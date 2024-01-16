/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:13:23 by omaali            #+#    #+#             */
/*   Updated: 2024/01/16 17:05:22 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)/* start is 'i' in update_storage which is the length of "line" which we want to leave out*/
{
	int		i;
	char	*sub;

	i = 0;
	sub =(char *) malloc((len + 1) * sizeof(char));
	if (sub == -1)
	{
		free(s);
		return NULL;
	}
	while(i < len && s[start])
	{
		sub[++i] = s[++start]; 
	}
	return (*sub)
}
size_t ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
char *ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	len = ft_strlen(const char *s1)
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	return (*s2)
}
char *ft_strchr(const char *s, int c)
{
	int	i;
	int size;

	i = 0;
	size = ft_strlen(s) + 1;
	while (i < size)
	{
		if(s[i] = (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
char *ft_strjoin(char const *s1, char const *s2)
{
	char	*combo;
	char 	*result;

	combo = (char *)malloc (ft_strlen(s1) + (ft_strlen(s2) + 1) * sizeof(char))
	if (!combo)
		return (0);
	result = combo
	if (!s1 || !s2)
		return (0);
	while (s1)
		*combo++ = *s1++/* iterating what's inside the pointers using '*' */
	while (s2)
		*combo++ = *s2++;
	result = combo;
	return (result)
}
