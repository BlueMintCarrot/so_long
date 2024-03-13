/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:12:03 by joanda-s          #+#    #+#             */
/*   Updated: 2024/02/05 15:53:43 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stddef.h>

int		ft_strlen_gnl(char *str);
int		ft_checknl(char *buffer);
char	*get_next_line(int fd);
char	*ft_strjoin_gnl(char *s1, char *s2);
void	ft_clearbuf(char *buffer);

#endif