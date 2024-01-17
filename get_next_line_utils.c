/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:13:23 by omaali            #+#    #+#             */
/*   Updated: 2024/01/17 22:43:23 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// char	*ft_substr(char *s, unsigned int start, size_t len)/* start is 'i' in update_storage which is the length of "line" which we want to leave out*/
// {
// 	size_t		i;
// 	char	*sub;

// 	i = 0;
// 	sub =(char *) malloc((len + 1) * sizeof(char));
// 	if (!sub)
// 	{
// 		free_str(&s);
// 		return NULL;
// 	}
// 	while(i < len && s[start])
// 	{
// 		sub[++i] = s[++start]; 
// 	}
// 	return (sub);
// }

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	size_src;
	size_t	count;
	char	*ptr;
	if (!s)
		return (NULL);
	count = 0;
	size_src = ft_strlen(s);
	if (start > size_src)
		ptr = malloc(sizeof(char) * 1);
	else if (size_src - start < len)
		ptr = malloc(sizeof(char) * (size_src - start + 1));
	else
		ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (start + count < size_src && count < len)
	{
		ptr[count] = s[start + count];
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
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
char *ft_strjoin(char *s1, char *s2)
{
	char	*combo;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if(!s1)
	{
		s1 = malloc(1 * sizeof(char));
		if(!s1)
			return(free_str(&s1));
		s1[0] = '\0';
	}
	combo = (char *)malloc (ft_strlen(s1) + (ft_strlen(s2) + 1) * sizeof(char));
	if (combo == NULL)
		return(free_str(&s1));
	while (s1[i])
		combo[i++] = s1[j++];
	j = 0;
	while (s2[j])
		combo[i++] = s2[j++];
	combo[i] = '\0';
	free(s1);
	return (combo);
}
