/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 09:35:21 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/04 12:27:01 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t num)
{
	size_t	i;
	size_t	j;
	char	*fir;
	char	*sec;

	fir = (char*)s1;
	sec = (char*)s2;
	if (ft_strlen(sec) == 0)
		return (fir);
	i = 0;
	while (fir[i] != '\0' && i < num)
	{
		j = 0;
		while (sec[j] == fir[i + j] && (i + j) < num)
		{
			if (sec[j + 1] == '\0')
			{
				return (fir + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
