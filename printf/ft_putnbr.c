/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanda-s <joanda-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 23:14:20 by joanda-s          #+#    #+#             */
/*   Updated: 2023/04/27 00:58:50 by joanda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, long int *char_ttl)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648", char_ttl);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', char_ttl);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, char_ttl);
		ft_putnbr(nb % 10, char_ttl);
	}
	else
		ft_putchar (nb + '0', char_ttl);
}
