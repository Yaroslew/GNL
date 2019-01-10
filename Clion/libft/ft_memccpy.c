/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 08:55:10 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/30 12:34:03 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *first, const void *second, int c, size_t num)
{
	size_t			q;
	unsigned char	*fir;
	unsigned char	*sec;

	q = 0;
	fir = (unsigned char*)first;
	sec = (unsigned char*)second;
	while (q != num)
	{
		fir[q] = sec[q];
		if (fir[q] == (unsigned char)c)
			return (&fir[q + 1]);
		q++;
	}
	return (NULL);
}
