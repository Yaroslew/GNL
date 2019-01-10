/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 17:09:28 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/07 17:09:31 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_realloc(void *mem, size_t num)
{
	char	*temp;

	if (num == 0)
	{
		free(mem);
		mem = NULL;
		return (NULL);
	}
	if (!(temp = malloc(num)))
		return (NULL);
	if (mem == NULL)
		return (temp);
	temp = ft_memmove(temp, mem, num);
	free(mem);
	mem = NULL;
	return (temp);
}
