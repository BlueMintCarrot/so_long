/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prinf2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:34:26 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 17:07:37 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check(char *str, va_list args, int i, long int *ttl)
{
	if (str[i] == 'c')
		ft_putchar(va_arg(args, int), ttl);
	else if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(args, long int), ttl);
	else if (str[i] == 'p')
		ft_hexa(va_arg(args, unsigned long int), ttl, 1, 0);
	else if (str[i] == 's')
		ft_putstr(va_arg(args, char *), ttl);
	else if (str[i] == 'u')
		ft_unint(va_arg(args, unsigned int), ttl);
	else if (str[i] == 'x')
		ft_hexa(va_arg(args, unsigned int), ttl, 2, 0);
	else if (str[i] == 'X')
		ft_hexa(va_arg(args, unsigned int), ttl, 2, 1);
	else if (str[i] == '%')
		ft_putchar('%', ttl);
}

int	prinf(const char *str, ...)
{
	va_list		args;
	long int	i;
	long int	ttl;

	i = -1;
	ttl = 0;
	va_start(args, str);
	while (str[++i])
	{
		if (str[i] == '%')
			ft_check((char *)str, args, ++i, &ttl);
		else
			ft_putchar(str[i], &ttl);
	}
	va_end(args);
	return (ttl);
}
