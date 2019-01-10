/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 07:37:47 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/12 07:48:44 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *first, const char *second, size_t num)
{
	int		q;
	size_t	r;

	q = 0;
	r = 0;
	if (num == 0)
		return (first);
	while (first[q])
		q++;
	while (second[r] && r < num)
	{
		first[q] = second[r];
		q++;
		r++;
	}
	first[q] = '\0';
	return (first);
}
