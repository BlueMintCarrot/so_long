/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extras3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:13:29 by joana             #+#    #+#             */
/*   Updated: 2024/03/13 13:11:04 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	error_map_check(int first_check, int c, int p, int e)
{
	if (first_check == 0 && c == 0)
		print_error_message(1);
	if (p == 0)
		print_error_message(2);
	else if (e == 0)
		print_error_message(3);
}
