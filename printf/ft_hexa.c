/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanda-s <joanda-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 23:52:24 by joanda-s          #+#    #+#             */
/*   Updated: 2023/04/27 01:53:24 by joanda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa(unsigned long int nb, long int *char_ttl, int p, int up)
{
	if (!nb && p == 0)
	{
		ft_putstr("(nil)", char_ttl);
		return ;
	}
	if (p == 0)
	{
		ft_putstr("0x", char_ttl);
	}
	if (nb >= 16)
	{
		ft_hexa(nb / 16, char_ttl, ++p, up);
	}
	if (up)
	{
		ft_putchar(HEXUP[nb % 16], char_ttl);
	}
	else
	{
		ft_putchar(HEXLOW[nb % 16], char_ttl);
	}
}
