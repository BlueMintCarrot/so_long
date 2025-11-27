/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prinf1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:29:46 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 16:35:24 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_hexa(unsigned long int nb, long int *ttl, int p, int up)
{
	if (!nb && p == 1)
	{
		ft_putstr("(nil)", ttl);
		return ;
	}
	if (p == 1)
		ft_putstr("0x", ttl);
	if (nb >= 16)
		ft_hexa(nb / 16, ttl, ++p, up);
	if (up)
		ft_putchar(HEXUP[nb % 16], ttl);
	else
		ft_putchar(HEXLOW[nb % 16], ttl);
}

void	ft_putchar(int c, long int *ttl)
{
	write(1, &c, 1);
	(*ttl) += 1;
}

void	ft_putnbr(int n, long int *ttl)
{
	long int	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar('-', ttl);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, ttl);
		ft_putnbr(nb % 10, ttl);
	}
	else
	{
		nb += 48;
		ft_putchar(nb, ttl);
	}
}

void	ft_putstr(char *str, long int *ttl)
{
	int	i;

	i = -1;
	if (!str)
		ft_putstr("(null)", ttl);
	else
	{
		while (str[++i])
			ft_putchar(str[i], ttl);
	}
}

void	ft_unint(unsigned int nb, long int *ttl)
{
	if (nb > 9)
	{
		ft_unint(nb / 10, ttl);
		ft_unint(nb % 10, ttl);
	}
	else
		ft_putchar(nb + '0', ttl);
}
