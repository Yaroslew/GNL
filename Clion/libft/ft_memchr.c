/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 07:01:49 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/30 12:41:44 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *arr, int c, size_t n)
{
	char	*fir;
	size_t	q;

	q = 0;
	if (n == 0)
		return (NULL);
	fir = (char*)arr;
	while (q != n)
	{
		if (fir[q] == (char)c)
			return (&fir[q]);
		q++;
	}
	return (NULL);
}
