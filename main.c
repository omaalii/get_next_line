/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 02:28:01 by omaali            #+#    #+#             */
/*   Updated: 2024/01/18 02:38:01 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main()
{
	int fd = open("file.txt", O_RDONLY);
	int	count = 0;
	while (count < 5)
	{
		printf("%s\n", get_next_line(fd));
		count++;
	}
	return (0);
}
