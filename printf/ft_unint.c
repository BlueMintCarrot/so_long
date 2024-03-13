/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanda-s <joanda-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 23:50:23 by joanda-s          #+#    #+#             */
/*   Updated: 2023/04/27 00:58:31 by joanda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unint(unsigned int nb, long int *char_ttl)
{
	if (nb > 9)
	{
		ft_unint(nb / 10, char_ttl);
		ft_unint(nb % 10, char_ttl);
	}
	else
		ft_putchar (nb + '0', char_ttl);
}
