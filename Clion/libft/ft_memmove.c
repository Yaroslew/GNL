/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 05:38:42 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/07 12:16:16 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *first, const void *second, size_t num)
{
	size_t		q;
	char		*fir;
	char		*sec;

	if (first == second)
		return (first);
	q = -1;
	fir = (char*)first;
	sec = (char*)second;
	if (num == 0)
		return (fir);
	if (sec < fir)
		while ((int)(--num) >= 0)
			*(fir + num) = *(sec + num);
	else
		while (++q < num)
			*(fir + q) = *(sec + q);
	return (first);
}
