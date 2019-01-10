/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 04:37:07 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/30 12:44:11 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *second, int c)
{
	int		q;
	char	*r;

	q = 0;
	r = (char*)second;
	if (c == '\0')
	{
		while (r[q] != '\0')
			q++;
		return (&r[q]);
	}
	while (r[q])
	{
		if (r[q] == (char)c)
			return (&r[q]);
		q++;
	}
	return (0);
}
