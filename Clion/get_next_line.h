/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 13:04:06 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/08 13:04:07 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 6

#include <stdlib.h>
#include <unistd.h>

#define struct		s_list
{
	char			*str;
	size_t			size;
	int 			fd;
	struct s_list	*next;
} t_list;

int get_next_line(const int fd, char **line);

# endif