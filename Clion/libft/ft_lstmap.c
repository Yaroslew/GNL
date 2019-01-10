/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 07:13:32 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/30 07:37:04 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		del(t_list *res)
{
	t_list	*temp;

	while (res)
	{
		temp = res;
		free(res->content);
		res = temp->next;
		free(temp);
	}
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*temp;
	t_list		*res;
	t_list		*save;

	if (!lst || !f)
		return (NULL);
	res = NULL;
	save = NULL;
	while (lst)
	{
		if (!(temp = (t_list*)malloc(sizeof(t_list))))
		{
			del(res);
			return (NULL);
		}
		temp = f(lst);
		if (!res)
			res = temp;
		if (save)
			save->next = temp;
		save = temp;
		lst = lst->next;
	}
	temp->next = NULL;
	return (res);
}
