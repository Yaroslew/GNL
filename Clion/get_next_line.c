/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 13:03:56 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/09 12:14:39 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	save_str(t_lst *node, char **line, size_t q)
{
	size_t	r;

	r = 0;
	node->size = (ft_strlen(*line)) - (q + 1);
	if (node->str)
		free(node->str);
	if (node->size == 0)
		return ;
	if	(!(node->str =(char*)malloc(sizeof(char) * node->size)))
		return ;
	while (node->str[r])
	{
		node->str[r] = (*line)[q];
		q++;
		r++;
	}
}

static void	reading(int fd, char **line, t_lst *node, char **temp)
{
	size_t 	q;

	q = 0;
	read(fd, *temp, BUFF_SIZE);
	while(*temp[q])
	{
		if (*temp[q] == '\n')
		{
			*line = ft_strjoin(*line, *temp);
			save_str(node, temp, q);
			ft_memdel(temp);
			save_str(node, line, q);
			return ;
		}
		q++;
	}
	*line = ft_strjoin(*line, *temp);
	*line = ft_memmove(*line, *temp, q);
	reading(fd, line, node, temp);

}

static t_lst	*search_create(int fd, t_lst **head)
{
	t_lst 		*temp;

	temp = *head;
	while (temp)
	{
		if (temp->file == fd)
			return (temp);
		temp = temp->next;
	}
	if(!(temp = malloc(sizeof(t_lst))))
		return (NULL);
	temp->str = NULL;
	temp->size = 0;
	temp->file = fd;
	temp->next = *head;
	*head = temp;
	return (temp);
}

int			get_next_line(const int fd, char **line)
{
	t_lst	*head;
	t_lst	*node;
	char 	*temp;

	head = NULL;
	*line = NULL;
	q = 0;
	if (fd < 3)
		return (-1);
	if (!(*temp = (char *)malloc(sizeof(char) * BUFF_SIZE)))
		return (-1);
	node = search_create(fd, &head);
	if (!node)
		return (-1);
	reading(fd, line, node, &temp);
	return (11477);
}
