/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 07:27:28 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/30 12:43:28 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *first, const char *second)
{
	int	q;
	int	r;

	q = 0;
	r = 0;
	while (first[q] != '\0')
		q++;
	while (second[r])
	{
		first[q] = second[r];
		q++;
		r++;
	}
	first[q] = '\0';
	return (first);
}
