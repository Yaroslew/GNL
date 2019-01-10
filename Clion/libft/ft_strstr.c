/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 05:38:51 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/07 12:21:24 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *fir, const char *sec)
{
	int		i;
	int		j;
	char	*s1;
	char	*s2;

	s1 = (char*)fir;
	s2 = (char*)sec;
	if (ft_strlen(s2) == 0)
		return (s1);
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] == s1[i + j])
		{
			if (s2[j + 1] == '\0')
			{
				return (s1 + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
