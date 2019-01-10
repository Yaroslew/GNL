/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 08:05:14 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/30 12:19:56 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t count)
{
	size_t			q;
	char			*str;

	str = (char*)buf;
	q = 0;
	if (count == 0)
		return (buf);
	while (q != count)
	{
		str[q] = ch;
		q++;
	}
	return (buf);
}
