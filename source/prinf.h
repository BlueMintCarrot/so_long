/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prinf.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:58:45 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/27 16:53:18 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINF_H
# define PRINF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

# define HEXUP "0123456789ABCDEF"
# define HEXLOW "0123456789abcdef"

int		prinf(const char *str, ...);
void	ft_check(char *str, va_list args, int i, long int *ttl);
void	ft_hexa(unsigned long int nb, long int *ttl, int p, int up);
void	ft_putchar(int c, long int *ttl);
void	ft_putnbr(int n, long int *ttl);
void	ft_putstr(char *str, long int *ttl);
void	ft_unint(unsigned int nb, long int *ttl);

#endif