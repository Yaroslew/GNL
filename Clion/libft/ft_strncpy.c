/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 06:37:57 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/14 04:28:12 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *first, const char *second, size_t num)
{
	size_t	q;

	q = 0;
	if (num == 0)
		return (first);
	while (q < num)
	{
		if (second[q] == '\0')
		{
			while (q < num)
			{
				first[q] = '\0';
				q++;
			}
			return (first);
		}
		first[q] = second[q];
		q++;
	}
	return (first);
}
