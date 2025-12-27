/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coholbur <coholbur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:58:08 by coholbur          #+#    #+#             */
/*   Updated: 2024/12/27 14:32:48 by coholbur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*ft_read(int fd, char *cup, char *buff)
{
	int		count;
	char	*temp;

	count = 1;
	while (count != 0)
	{
		count = read(fd, buff, BUFFER_SIZE);
		if (count == -1)
			return (NULL);
		else if (count == 0)
			break ;
		buff[count] = '\0';
		if (cup == NULL)
			cup = ft_strdup_next("");
		temp = cup;
		cup = ft_strjoin_next(temp, buff);
		free(temp);
		temp = NULL;
		if (ft_strchr_next(buff, '\n'))
			break ;
	}
	return (cup);
}

static char	*ft_obtain(char *line)
{
	int		count;
	char	*result;

	count = 0;
	while (line[count] && line[count] != '\n')
		count++;
	if (!line[count] || line[count + 1] == '\0')
		return (NULL);
	result = ft_substr_next(line, count + 1, ft_strlen_next(line) - count - 1);
	if (*line == '\0')
	{
		free(line);
		line = NULL;
	}
	line[count + 1] = '\0';
	return (result);
}

char	*get_next_line(int fd)
{
	static char	*x[1024];
	char		*buffer;
	char		*line;

	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	line = ft_read(fd, x[fd], buffer);
	free(buffer);
	buffer = NULL;
	if (line == NULL)
	{
		free(x[fd]);
		x[fd] = NULL;
		return (NULL);
	}
	x[fd] = ft_obtain(line);
	return (line);
}

