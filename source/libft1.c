/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-si <joada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:51:24 by joada-si          #+#    #+#             */
/*   Updated: 2025/11/26 22:51:25 by joada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	len(int nb)
{
	long int	n;
	int			s;

	if (nb == INT_MIN)
	{
		s = 10;
		return (s);
	}
	else if (nb == 0)
	{
		s = 1;
		return (s);
	}
	if (nb < 0)
		n = -nb;
	else
		n = nb;
	s = 0;
	while (n > 0)
	{
		n /= 10;
		s++;
	}
	return (s);
}

static	char	*negative(int nb, char *str, int *array)
{
	int		i;
	int		j;
	int		s;

	i = -1;
	j = -1;
	s = len(nb);
	if (nb == INT_MIN)
	{
		str[++i] = '-';
		str[++i] = '2';
		nb = (INT_MIN + 2000000000) * -1;
	}
	else if (nb < 0)
	{
		str[++i] = '-';
		nb *= -1;
	}
	while (nb > 0 && ++j < s)
	{
		array[j] = nb % 10;
		nb /= 10;
	}
	return (str);
}

static void	pos_or_zero(int *array, int nb)
{
	int	s;
	int	j;

	s = len(nb);
	j = -1;
	if (nb == 0)
		array[++j] = 0;
	else
	{
		s = len(nb);
		while (nb > 0 && ++j < s)
		{
			array[j] = nb % 10;
			nb /= 10;
		}
	}
}

static void	helper(int nb, int *ij, char *str, int *array)
{
	if (nb == INT_MIN)
	{
		ij[0] = 2;
		ij[1] = len(nb) - 1;
	}
	else
		ij[0] = 1;
	str = negative(nb, str, array);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		*array;
	int		ij[2];

	str = NULL;
	array = malloc(sizeof(int) * 10);
	if (nb < 0)
		str = malloc(sizeof(char) * len(nb) + 2);
	else if (nb >= 0)
		str = malloc(sizeof(char) * len(nb) + 1);
	ij[0] = 0;
	ij[1] = len(nb);
	if (!str || !array)
		return (NULL);
	if (nb < 0)
		helper(nb, ij, str, array);
	else if (nb >= 0 && nb <= INT_MAX)
		pos_or_zero(array, nb);
	while (--ij[1] > -1)
		str[ij[0]++] = array[ij[1]] + '0';
	str[ij[0]] = '\0';
	return (str);
}
