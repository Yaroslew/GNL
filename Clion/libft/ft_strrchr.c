/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 05:09:13 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/30 12:44:24 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *second, int c)
{
	int		q;
	char	*sec;

	q = 0;
	sec = (char*)second;
	while (sec[q])
		q++;
	while (q >= 0)
	{
		if (sec[q] == (char)c)
			return (&sec[q]);
		q--;
	}
	return (0);
}
