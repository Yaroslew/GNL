/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 13:03:56 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/12 10:17:07 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void			save_str(t_lst *node, char **temp, size_t q)
{
	size_t			r;

	r = 0;
	node->size = (ft_strlen(*temp)) - (q + 1);
	if (node->str)
		free(node->str);
	if (node->size == 0)
		return ;
	if (!(node->str = ft_memalloc(node->size)))
		return ;
	while (r != node->size)
	{
		node->str[r] = (*temp)[q + 1];
		q++;
		r++;
	}
}

static int			rerecord(t_lst *node, char **line)
{
	size_t			q;
	char			*copy;

	q = 0;
	while (node->str[q])
	{
		if (node->str[q] == '\n')
		{
			*line = ft_memalloc(q);
			*line = ft_memmove(*line, node->str, q);
			node->size = node->size - (q + 1);
			copy = node->str;
			node->str = ft_strsub(node->str, (unsigned int)q, node->size);
			ft_strdel(&copy);
			return (1);
		}
		q++;
	}
	*line = ft_memalloc(BUFF_SIZE);
	copy = *line;
	*line = ft_strnjoin(line, node->str, node->size);
	node->size = 0;
	ft_strdel(&node->str);
	return (0);
}

static int			reading_fd(int fd, char **line, t_lst *node)
{
	char			*temp;
	int				buff;
	size_t			q;

	q = -1;
	if (!(temp = ft_memalloc(BUFF_SIZE)))
		return (-1);
	if ((buff = read(fd, temp, BUFF_SIZE)) == 0)
	{
		if (*line)
			ft_strdel(line);
		ft_strdel(&temp);
		return (0);
	}
	while (temp[++q])
		if (temp[q] == '\n')
		{
			*line = ft_strnjoin(line, temp, q);
			save_str(node, &temp, q);
			ft_strdel(&temp);
			return (1);
		}
	*line = ft_strnjoin(line, temp, q);
	ft_strdel(&temp);
	return (reading_fd(fd, line, node));
}

static t_lst		*search_create(int fd, t_lst **head)
{
	t_lst			*temp;

	temp = *head;
	while (temp)
	{
		if (temp->file == fd)
			return (temp);
		temp = temp->next;
	}
	if (!(temp = malloc(sizeof(t_lst))))
		return (NULL);
	temp->str = NULL;
	temp->size = 0;
	temp->file = fd;
	temp->next = *head;
	*head = temp;
	return (temp);
}

int					get_next_line(const int fd, char **line)
{
	static t_lst	*head;
	t_lst			*node;
	int				res;
	t_lst			*begin;

	if (fd < 3)
		return (-1);
	if (*line)
		ft_strdel(line);
	node = search_create(fd, &head);
	if (!node)
		return (-1);
	begin = head;
	if (node->size > 0)
		if (rerecord(node, line))
			return (1);
	res = reading_fd(fd, line, node);
	if (res == 0)
		node = search_create(fd, &head);
	return (res);
}
