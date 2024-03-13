/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanda-s <joanda-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 23:34:31 by joanda-s          #+#    #+#             */
/*   Updated: 2023/04/27 00:58:41 by joanda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, long int *char_ttl)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)", char_ttl);
	}
	else
	{
		while (str[i] != '\0')
		{
			ft_putchar(str[i], char_ttl);
			i++;
		}
	}
}
