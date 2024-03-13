/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:39:48 by joanda-s          #+#    #+#             */
/*   Updated: 2024/02/05 15:54:16 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen_gnl(char *str)
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

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*final;

	i = 0;
	j = 0;
	final = malloc(sizeof(char) * (ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1));
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

void	ft_clearbuf(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\0')
	{
		buffer[i] = '\0';
		i++;
	}
}

int	ft_checknl(char *buffer)
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
