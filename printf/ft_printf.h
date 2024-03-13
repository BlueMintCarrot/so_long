/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanda-s <joanda-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 02:07:55 by joanda-s          #+#    #+#             */
/*   Updated: 2023/04/27 01:07:37 by joanda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

# define HEXUP "0123456789ABCDEF"
# define HEXLOW "0123456789abcdef"

int		ft_printf(const char *str, ...);
void	ft_check(char *str, va_list args, int i, long int *char_ttl);
void	ft_hexa(unsigned long int nb, long int *char_ttl, int p, int up);
void	ft_putchar(int c, long int *char_ttl);
void	ft_putnbr(int nb, long int *char_ttl);
void	ft_putstr(char *str, long int *char_ttl);
void	ft_unint(unsigned int nb, long int *char_ttl);

#endif