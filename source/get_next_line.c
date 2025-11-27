/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:15 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 18:30:52 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_strlenn(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

static char	*ft_strjoinn(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*final;

	i = 0;
	j = 0;
	final = malloc(sizeof(char) * (ft_strlenn(s1) + ft_strlenn(s2) + 1));
	if (final == NULL)
		return (NULL);
	while (s1 && s1[i])
	{
		final[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		final[i] = s2[j];
		i++;
		if (s2[j] == '\n')
			break ;
		j++;
	}
	free (s1);
	final[i] = '\0';
	return (final);
}

static int	ft_checknl(char *buffer)
{
	int	i;
	int	j;
	int	nl;

	i = 0;
	j = 0;
	nl = 0;
	while (buffer[i] != '\0')
	{
		if (nl == 1)
		{
			buffer[j] = buffer[i];
			j++;
		}
		if (buffer[i] == '\n')
			nl = 1;
		buffer[i] = '\0';
		i++;
	}
	return (nl);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	buffer[BUFFER_SIZE + 1];
	int			i;

	i = 0;
	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (ft_checknl(buffer), NULL);
	while (1)
	{
		if (*buffer == 0)
		{
			i = read(fd, buffer, BUFFER_SIZE);
			if (i < 0)
				return (ft_checknl(buffer), free(line), NULL);
			else if (i == 0)
				break ;
		}
		line = ft_strjoinn(line, buffer);
		if (ft_checknl(buffer))
			break ;
	}
	return (line);
}
