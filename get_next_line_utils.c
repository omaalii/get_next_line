/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:13:23 by omaali            #+#    #+#             */
/*   Updated: 2024/01/17 21:32:31 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char *s, unsigned int start, size_t len)/* start is 'i' in update_storage which is the length of "line" which we want to leave out*/
{
	size_t		i;
	char	*sub;

	i = 0;
	sub =(char *) malloc((len + 1) * sizeof(char));
	if (!sub)
	{
		free_str(&s);
		return NULL;
	}
	while(i < len && s[start])
	{
		sub[++i] = s[++start]; 
	}
	return (sub);
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
	int		len;

	i = 0;
	s2 = NULL;
	len = ft_strlen(s1);
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
char *ft_strchr(const char *s, int c)
{
	int	i;
	int size;

	i = 0;
	size = ft_strlen(s) + 1;
	while (i < size)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
char *ft_strjoin(char const *s1, char const *s2)
{
	char	*combo;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if(!s1)
		s1 = malloc(1 * sizeof(char *));
	combo = (char *)malloc (ft_strlen(s1) + (ft_strlen(s2) + 1) * sizeof(char));
	if (!combo)
	{
		free(combo);
		combo = NULL;
	}
	while (s1[i])
	{
		combo[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		combo[i] = s2[j];
		i++;
		j++;
	}
	combo[j + i] = '\0';
	return (combo);
}
