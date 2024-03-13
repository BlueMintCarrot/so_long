/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanda-s <joanda-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 02:48:24 by joanda-s          #+#    #+#             */
/*   Updated: 2023/04/27 01:36:42 by joanda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(char *str, va_list args, int i, long int *char_ttl)
{
	if (str[i] == 'c')
		ft_putchar(va_arg(args, int), char_ttl);
	else if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(args, long int), char_ttl);
	else if (str[i] == 'p')
		ft_hexa(va_arg(args, unsigned long int), char_ttl, 0, 0);
	else if (str[i] == 's')
		ft_putstr(va_arg(args, char *), char_ttl);
	else if (str[i] == 'u')
		ft_unint(va_arg(args, unsigned int), char_ttl);
	else if (str[i] == 'x')
		ft_hexa(va_arg(args, unsigned int), char_ttl, 1, 0);
	else if (str[i] == 'X')
		ft_hexa(va_arg(args, unsigned int), char_ttl, 1, 1);
	else if (str[i] == '%')
		ft_putchar('%', char_ttl);
}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	long int		i;
	long int		char_ttl;

	i = 0;
	char_ttl = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			ft_check((char *)str, args, ++i, &char_ttl);
		else
			ft_putchar(str[i], &char_ttl);
		i++;
	}
	va_end(args);
	return (char_ttl);
}
