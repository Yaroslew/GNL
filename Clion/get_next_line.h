/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 13:04:06 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/11 12:48:21 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE		6

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct			s_lst
{
	char				*str;
	size_t				size;
	int					file;
	struct s_lst		*next;
}						t_lst;

int						get_next_line(const int fd, char **line);
#endif
