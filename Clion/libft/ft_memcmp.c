/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 07:30:18 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/30 12:41:54 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_memcmp(const void *first, const void *second, size_t num)
{
	unsigned char	*fir;
	unsigned char	*sec;
	size_t			q;

	q = 0;
	fir = (unsigned char*)first;
	sec = (unsigned char*)second;
	while (q < num)
	{
		if (fir[q] != sec[q])
			return (fir[q] - sec[q]);
		q++;
	}
	return (0);
}
