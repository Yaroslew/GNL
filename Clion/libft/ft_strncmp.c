/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 09:39:26 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/16 09:44:50 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t num)
{
	size_t	q;

	q = 0;
	if (num == 0)
		return (0);
	while (s1[q] == s2[q] && (s1[q] != '\0' && s2[q] != '\0') && q < num - 1)
		q++;
	return ((unsigned char)s1[q] - (unsigned char)s2[q]);
}
