/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 09:17:20 by grubin            #+#    #+#             */
/*   Updated: 2021/12/14 16:35:27 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_read
{
	int		fd;
	int		max;
	int		pos;
	char	data[BUFFER_SIZE];
}	t_read;

int		init_check(int fd, t_read *info);
char	read_check(t_read *info);
char	*get_next_line(int fd);
int		ft_strlen(char *str);
char	*join(char *str, char c);

#endif
