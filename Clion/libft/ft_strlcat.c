/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 04:29:13 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/15 18:41:31 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t num)
{
	size_t	q;
	size_t	w;
	size_t	count;
	size_t	save;

	q = ft_strlen(dst);
	w = ft_strlen(src);
	count = 0;
	save = q;
	if (q >= num)
	{
		save = num;
	}
	else
	{
		while (src[count] && (q + 1) < num)
		{
			dst[q] = src[count];
			count++;
			q++;
		}
		dst[q] = '\0';
	}
	return (w + save);
}
