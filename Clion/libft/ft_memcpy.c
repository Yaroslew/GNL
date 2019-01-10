/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 08:44:52 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/07 12:17:11 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destptr, const void *crsptr, size_t num)
{
	size_t			q;
	char			*fir;
	char			*sec;

	if (destptr == crsptr)
		return (destptr);
	fir = (char*)destptr;
	sec = (char*)crsptr;
	q = 0;
	if (num == 0)
		return (destptr);
	while (q < num)
	{
		fir[q] = sec[q];
		q++;
	}
	return (fir);
}
