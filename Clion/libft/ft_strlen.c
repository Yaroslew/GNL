/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 05:48:09 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/19 06:36:13 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const void *string)
{
	size_t	q;
	char	*str;

	str = (char*)string;
	if (str == NULL)
		return (0);
	q = 0;
	while (str[q])
		q++;
	return (q);
}
