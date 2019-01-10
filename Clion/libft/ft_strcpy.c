/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 06:05:29 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/30 12:42:55 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *first, const char *second)
{
	int		q;

	q = 0;
	while (second[q])
	{
		first[q] = second[q];
		q++;
	}
	first[q] = second[q];
	return (first);
}
