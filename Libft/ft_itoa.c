/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:46:37 by joanda-s          #+#    #+#             */
/*   Updated: 2023/10/06 15:37:02 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_callen(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len = 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static void	ft_getdigit(long n, char *str, int *i)
{
	if (n > 9)
	{
		ft_getdigit(n / 10, str, i);
		ft_getdigit(n % 10, str, i);
	}
	else
		str[(*i)++] = n + 48;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nbr;

	nbr = n;
	str = malloc(sizeof(char) * (ft_callen(nbr) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		str[i] = '-';
		i++;
		nbr = nbr * -1;
	}
	ft_getdigit(nbr, str, &i);
	str[i] = '\0';
	return (str);
}
